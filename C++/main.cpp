#include "matrix.h"

int main () {

    vector < vector <float> > initial_grid (7, vector <float> (5,0.4));
    vector < vector <float> > second_grid (7, vector <float> (5,0.2));

  
     Matrix matrixa(initial_grid);
     Matrix matrixb(initial_grid);
   
    matrixa.matrix_prints();

    cout<<matrixa.getRows()<<endl;
    
 
    cout<<matrixa.getCols()<<endl;

   
    Matrix resultadds(matrixa.addition(matrixb));
  
    
  
return 0;
}
