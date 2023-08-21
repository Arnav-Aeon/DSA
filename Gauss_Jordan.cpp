#include <bits/stdc++.h>
#define n 4

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

void row_change(double matrix[n][n+1] , int row1 , int row2){
    for(int i = 0 ; i < n+1 ; ++i){
        swap(matrix[row1][i] , matrix[row2][i]) ; 
    }
}

void rref(double matrix[n][n+1]){
    
    for(int i = 0 ; i < n ; ++i){
        for(int k = 0 ; k < i ; ++k){
            if(matrix[k][k] != 0){
                double f = matrix[i][k]/matrix[k][k] ; 
                row_operation(matrix , k , i , f );
            }
            else{
                row_change(matrix , k , i) ; 
            }
            
        }

        
    }


    for(int i = n-1 ; i >= 0 ; --i){
        for(int k = n-1 ; k > i ; --k){
            if(matrix[k][k] != 0){
                double f = matrix[i][k]/matrix[k][k] ; 
                row_operation(matrix , k , i , f) ; 
            }
            else{
                row_change(matrix , k , i) ; 
            } 
            
        }

        display(matrix) ; 
        cout << endl ; 
    }

    for(int i = 0 ; i < n ; ++i){
        double temp = matrix[i][i] ; 
        for(int j = 0 ; j < n+1 ; ++j){
            matrix[i][j] = matrix[i][j]/temp ; 
        }
    }

    display(matrix) ; 
}


void solution(double matrix[n][n+1]){
    rref(matrix) ; 
    cout << "The Solutions are : " ; 
    for(int i = 0 ; i < n ; ++i){
        cout << matrix[i][n] << ' ' ; 
    }
}


int main() {
    cout << fixed ; 
    cout << setprecision(4) ; 
    double matrix[n][n+1] = {{1.0 , 1.0 , 1.0 , 1.0 , 13.0},
                             {2.0 , 2.0 , 0.0 , -1.0 , -1.0},
                             {-3.0 , 4.0 , 1.0 , 2.0 , 10.0},
                             {1.0  , 2.0 , -1.0 , 1.0 , 1.0}};

    solution(matrix) ; 

    return 0 ; 
}