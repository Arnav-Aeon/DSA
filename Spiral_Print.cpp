#include <iostream>
using namespace std;



void spiralPrint(int **input, int nRows, int nCols){
    int x = 0 , y = -1 , k = 1 , count = nRows*nCols;
    while((nRows > 0 || nCols > 0) && count > 0 ){
        for(int i = 0 ; i < nCols ; ++i){
            if(k == 1) y++ ;
            else y-- ;  
            cout << input[x][y] << ' ' ; 
            count-- ;
            
        }

        nRows-- ; 
        nCols-- ;

        for(int i = 0 ; i < nRows ; ++i){
            if(k == 1) x++ ; 
            else x-- ;
            //cout << endl << x << ' ' << y << endl ; 
            cout << input[x][y] << ' ' ; 
            count-- ;
            
        }

        
        k *= -1 ; 
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}