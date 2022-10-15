import netwrokx as nx
import matplotlib.pyplot as plt
G=nx.Graph()
G.add_node(1)
G.add_node(2)
G.add_node(3)
G.add_edge(1,2)
G.add_edge(2,3)
G.add_edge(1,3)
nx.draw(G)
plt.show()

