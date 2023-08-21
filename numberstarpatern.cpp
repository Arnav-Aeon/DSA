#include<bits/stdc++.h>

using namespace std ; 

int main() {
    int n ; 
    cin >> n ; 
    for(int i = 0 ; i < n ; ++i){
        for(int j = 1 ; j <= n-i ; ++j){
            cout << j ;
        }
        for(int k = 0 ; k < 2*i ; ++k){
            cout << "*" ; 
        }
        for(int w = n-i ; w >= 1 ; --w){
            cout << w ;
        }
        cout << endl ; 
    }
    return 0 ; 
}