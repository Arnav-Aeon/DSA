#include<bits/stdc++.h>

using namespace std ; 

int main() {
    int n , p ;
    cin >> n >> p ; 
    int ans = 1 ; 
    while(p){
        ans *= n ;
        p-- ;
    }
    cout << ans ; 
    return 0 ; 
}