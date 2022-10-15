import time
from helpers import blur

# The 2D move function
def move(dy, dx, beliefs, blurring):
    height = len(beliefs)
    width = len(beliefs[0])
    new_G = [[0.0 for i in range(width)] for j in range(height)]
    for i, row in enumerate(beliefs):
        for j, cell in enumerate(row):
            new_i = (i + dy ) % width
            new_j = (j + dx ) % height
            new_G[int(new_i)][int(new_j)] = cell
    return blur(new_G, blurring)

# Initialize a world grid of beliefs
grid = [ [0.05, 0.2, 0.2, 0.05, 0.05],
         [0.05, 0.1, 0.2, 0.05, 0.05] ]

# Record the time it takes to execute the move function
# Start the timer and record the start time
start_time = time.time()

# Time the move function for 1000 iterations
# move 2 to the right each iteration

### TODO: Change the number of iterations and see how this performs - try 10000x !
### TODO: Run multiple times and notice the slight change in recorded time
iterations = 1000

for i in range(0, iterations):
    move(0, 2, grid, 1.0)

# Record the end time and print the result!
stop_time = time.time()

millisec_time = 1000*(stop_time - start_time)
print("Time to move " +str(iterations) + " iterations in milliseconds: " + str(millisec_time))
# Helper functions

def normalize(grid):
    """
    Given a grid of unnormalized probabilities, computes the
    correspond normalized version of that grid. 
    """
    total = 0.0
    for row in grid:
        for cell in row:
            total += cell
    for i,row in enumerate(grid):
        for j,cell in enumerate(row):
            grid[i][j] = float(cell) / total
    return grid


def blur(grid, blurring):
    """
    Spreads probability out on a grid using a 3x3 blurring window.
    The blurring parameter controls how much of a belief spills out
    into adjacent cells. If blurring is 0 this function will have 
    no effect. 
    """
    height = len(grid)
    width  = len(grid[0])

    center_prob = 1.0-blurring
    corner_prob = blurring / 12.0
    adjacent_prob = blurring / 6.0

    window = [
            [corner_prob,  adjacent_prob,  corner_prob],
            [adjacent_prob, center_prob,  adjacent_prob],
            [corner_prob,  adjacent_prob,  corner_prob]
        ]
    new = [[0.0 for i in range(width)] for j in range(height)]
    for i in range(height):
        for j in range(width):
            grid_val = grid[i][j]
            for dx in range(-1,2):
                for dy in range(-1,2):
                    mult = window[dx+1][dy+1]
                    new_i = (i + dy) % height
                    new_j = (j + dx) % width
                    new[new_i][new_j] += mult * grid_val
    return normalize(new)