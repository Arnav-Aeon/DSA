#include<bits/stdc++.h>

using namespace std ;

int main(){
    int n ;
    cin >> n ; 

    for(int i = 0 ; i <= n/2 ; ++i){
        if(i*i > n){
            cout << i-1 ; 
            break ; 
        }
        else if(i*i == n){
            cout << i ; 
            break ;
        }
    }
    return 0 ; 
}