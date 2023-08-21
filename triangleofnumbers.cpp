#include<bits/stdc++.h>

using namespace std ; 

int main () {
    int n ; 
    cin >> n ; 
    for(int i = 1 ; i <= n ; ++i){
        for(int j = 1 ; j <= n-i ; ++j){
            cout << " " ;
        }
        int k ; 
        for(k = i ; k <= 2*i - 1 ; ++k){
            cout << k ;
        }
        for(int w = k-2 ; w >=i ; --w){
            cout<< w ;
        }
        cout<< endl;
    }
    return 0 ; 
}