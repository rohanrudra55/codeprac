#include "matrix.h"


Matrix::Matrix(){
    vector<vector<float> > initial_grid(4,vector<float>(4,0));
    grid=initial_grid;
    rows=initial_grid.size();
    cols=initial_grid.size();
}

Matrix::Matrix(vector<vector<float> >a){
     grid=a;
     rows=a.size();
     cols=a.size();
}

void Matrix::setGrid(vector<vector<float> > new_grid){
    grid=new_grid;
    rows=new_grid.size();
    cols=new_grid.size();
}

vector< vector<float> > Matrix::getGrid(){
    return grid;
}

vector< vector<float> >::size_type Matrix::getRows(){
    return rows;
}

vector< vector<float> >::size_type Matrix::getCols(){
    return cols;
}
Matrix Matrix::addition(Matrix other) {

    if ((rows != other.getRows()) || (cols != other.getCols())) {
        throw std::invalid_argument( "matrices are not the same size" );
    }

    std::vector< std::vector<float> > othergrid = other.getGrid();

    std::vector< std::vector<float> > result;

    std::vector<float> new_row;

    for (int i = 0; i < rows; i++) {
        new_row.clear();
        for (int j = 0; j < cols; j++) {
            new_row.push_back(grid[i][j] + othergrid[i][j]);
        }
        result.push_back(new_row);
    }

    return Matrix(result);
}

void Matrix::matrix_prints(){

    cout<<endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

