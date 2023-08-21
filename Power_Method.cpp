#include<bits/stdc++.h>
#define e 0.01
using namespace std  ;

#define n 2



void power(double matrix[][n] , double vect[]){
    // multi
    double new_vect[n] ; 
    int temp = 0 ; 
    int k = INT_MIN, k_new ;

    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n ; ++j){
            temp += matrix[i][j] * vect[i] ;
        }
            new_vect[i] = temp ; 
            temp = 0 ; 
    }
    k_new = vect[1] ; 

    // cout << endl ; 
    //     for(int i = 0 ; i < n ; ++i){
    //         cout << vect[i]/k_new<<endl  ; 
    //     }
    
    while(abs(k_new - k) > e){
        for(int i = 0 ; i < n ; ++i){
            for(int j = 0 ; j < n ; ++j){

                temp += matrix[i][j] * vect[i] ; 
            }

            vect[i] = temp ;
            cout << temp << endl  ;  
            temp = 0 ; 
        }
        k = k_new;
        k_new = vect[1] ;


        // cout << endl ; 
        // for(int i = 0 ; i < n ; ++i){
        //     cout << vect[i]<<endl  ; 
        // }
        //cout << k_new << " "  << k << endl ; 
    }

    cout << "The dominant eigenvalue is " << k_new << endl ;
    cout << "The dominant eigenvector is" << endl;

    for(int i = 0 ; i < n ; ++i){
        cout << vect[i]/k_new<<endl  ; 
    }
    

}

int main(){
    // int n ;
    // cout << "Enter the order: " ;
    // cin >> n ;

    double matrix[n][n] ; 
    double vect[n] ; 

    cout << "Enter the matrix: " << endl ; 

    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n ; ++j){
            cin >> matrix[i][j] ; 
        }
    }

    cout << "Enter the guess vector "<< endl ; 
    for(int i = 0 ; i < n ; ++i){
        cin >> vect[i] ; 
    }

    power(matrix , vect) ; 

    return 0 ; 
}