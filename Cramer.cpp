#include <bits/stdc++.h>
#define n 3

using namespace std ;

void display(double matrix[n][n+1]){
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n+1 ; j++){
            cout << matrix[i][j] << ' ' ; 
        }
        cout << endl ;
    }
}

void row_operation(double matrix[n][n+1] , int row1 , int row2 , double mult){
    for(int i = 0 ; i < n+1 ; ++i){
        matrix[row2][i] -= matrix[row1][i] * mult ; 
    }
}

void ref(double matrix[n][n+1]){
    for(int i = 0 ; i < n ; ++i){
        for(int k = 0 ; k < i ; ++k){
            double f = matrix[i][k]/matrix[k][k] ; 
            row_operation(matrix , k , i , f );
        }
        
    }
}

double determinant(double matrix[n][n+1]){
    ref(matrix) ;
    double det = 1 ; 
    for(int i = 0 ; i < n ; ++i){
        det *= matrix[i][i] ;
    }
    return det ; 
}

void col_change(double matrix[n][n+1] , int k){
    for(int i = 0 ; i < n ; ++i){
        swap(matrix[i][k] , matrix[i][3]) ; 
    }
}

void cramer(double matrix[n][n+1]){

    double D = determinant(matrix) ; 
    col_change(matrix , 0) ; 
    double D_1 = determinant(matrix) ; 
    col_change(matrix , 0) ; 
    col_change(matrix , 1) ;
    double D_2 = determinant(matrix) ; 
    col_change(matrix , 1) ; 
    col_change(matrix , 2) ; 
    double D_3 = determinant(matrix) ; 
    col_change(matrix , 2) ;

    cout << "Solutions: " << D_1/D <<' ' << D_2/D << ' ' << D_3/D ; 
}


int main() {
    double matrix[n][n+1] = {{1.0 , 2.0 , 3.0 , 14.0},
                             {3.0 , 1.0 , 2.0 , 11.0},
                             {2.0 , 3.0 , 1.0 , 11.0}};

    cout << determinant(matrix) << endl ; 
    cramer(matrix) ; 
    return 0 ; 
}