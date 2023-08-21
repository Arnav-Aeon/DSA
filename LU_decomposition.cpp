#include<bits/stdc++.h>
#define n 3

using namespace std ; 

void display(int matrix[][n]){
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n ; ++j){
            cout << matrix[i][j] << ' ' ; 
        }
        cout << endl ;
    }
}

void luDecomposition(int matrix[][n]){
    int lower[n][n]  , upper[n][n] ; 

    // making all elements of upper and lower matrix 0
    for(int i = 0; i < n ; ++i){
        for(int j = 0 ; j < n ; ++j){
            lower[i][j] = 0 ; 
            upper[i][j] = 0 ; 
        }
    }

    for(int i = 0 ; i < n ; ++i){

        // row of upper triangular
        for(int j = 0 ; j < n ; ++j){
            

            int temp = 0 ; 
            for(int k = 0 ; k < i ; ++k){
                temp += lower[i][k]*upper[k][j] ; 
            }
        }
    }
}

int main(){

    return 0 ; 
}