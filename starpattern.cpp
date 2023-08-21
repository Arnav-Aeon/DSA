#include<bits/stdc++.h>

using namespace std ; 

int main (){
    int n ; 
    cin >> n ; 

    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n-1-i ; j++){
            cout << " " ;
        }
        for(int k = 1 ; k <= 2*i+ 1 ; k++){
            cout << "*";
        }

        cout <<endl ;
    }

    return 0 ; 
}