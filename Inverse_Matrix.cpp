#include <bits/stdc++.h>
#define n 4
using namespace std ;

void display(double matrix[n][n]){
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n ; j++){
            cout << matrix[i][j] << ' ' ; 
        }
        cout << endl ;
    }
}

void row_operation(double matrix[n][n] , int row1 , int row2 , double mult){
    for(int i = 0 ; i < n ; ++i){
        matrix[row2][i] -= matrix[row1][i] * mult ; 
    }
}

void row_change(double matrix[n][n] , int row1 , int row2){
    for(int i = 0 ; i < n ; ++i){
        swap(matrix[row1][i] , matrix[row2][i]) ; 
    }
}

void rref(double matrix[n][n] , double identity[n][n]){
    
    for(int i = 0 ; i < n ; ++i){
        for(int k = 0 ; k < i ; ++k){
            if(matrix[k][k] != 0){
                double f = matrix[i][k]/matrix[k][k] ; 
                row_operation(matrix , k , i , f );
                row_operation(identity , k , i , f);
            }
            else{
                row_change(matrix , k , i);
                row_change(matrix , k , i);
            }
        }
        
    }

    for(int i = n-1 ; i >= 0 ; --i){
        for(int k = n-1 ; k > i ; --k){
            if(matrix[k][k] != 0){
                double f = matrix[i][k]/matrix[k][k] ; 
                row_operation(matrix , k , i , f );
                row_operation(identity , k , i , f);
            }
            else{
                row_change(matrix , k , i);
                row_change(matrix , k , i);
            }
        }
    }

    for(int i = 0 ; i < n ; ++i){
        double temp = matrix[i][i] ; 
        for(int j = 0 ; j < n ; ++j){
            matrix[i][j] = matrix[i][j]/temp ; 
            identity[i][j] = identity[i][j]/temp ; 
        }
    }

    display(identity) ; 
}




int main() {
    double matrix[n][n] ;
    cout << "Enter the matrix: " << endl ;
     
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n ; ++j){
            cin >> matrix[i][j] ; 
        }
    }

    double identity[n][n]; 
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n ; ++j){
            if(i != j){
                identity[i][j] = 0;
            }
            else{
                identity[i][j] = 1 ;
            }
        }
    }
    rref(matrix , identity) ; 

    return 0 ; 
}