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

void back_sub(double matrix[n][n+1]){
    int x , y , z ; 
    ref(matrix) ;
    z = matrix[2][3]/matrix[2][2] ;
    y = (matrix[1][3] - z*(matrix[1][2]))/matrix[1][1] ;
    x = (matrix[0][3] - y*(matrix[0][1]) - z*(matrix[0][2]))/matrix[0][0] ; 

    cout << x <<' ' << y << ' ' << z ;  
}


int main() {
    double matrix[n][n+1] = {{1.0 , 2.0 , 3.0 , 14.0},
                             {3.0 , 1.0 , 2.0 , 11.0},
                             {2.0 , 3.0 , 1.0 , 11.0}};

    cout << determinant(matrix) << endl ; 
    back_sub(matrix) ; 
    return 0 ; 
}