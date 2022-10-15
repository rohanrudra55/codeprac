#include <vector>
#include<iostream>
using namespace std;



class Matrix 
{
   private:
   vector<vector<float> > grid;
   vector<float>::size_type rows;
   vector<float>::size_type cols;    
   
   public:
        Matrix();
        Matrix(vector<vector<float> > a);
       void setGrid(vector<vector<float> > a);
       vector<vector<float> > getGrid();
       vector<vector<float> >::size_type getRows();
       vector<vector<float> >::size_type getCols();
       vector<vector<float> > matrix_transpose();
       vector<vector<float> > matrix_addition(Matrix);
       Matrix addition(Matrix ob);
       void matrix_prints();

};

