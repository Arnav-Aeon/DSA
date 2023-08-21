#include<bits/stdc++.h>

using namespace std ; 

int main() {
    int n ;
    cin >> n ;

    long bin = 1 ; 
    long res = 0 ; 

    while(n){
        bin += n%2 ;
        n /= 2 ; 
        bin *= 10 ;
    }
    while(bin){
        res *= 10 ;
        res += bin%10 ; 
        
        bin = bin/10 ;
        
    }
    cout << res - 1 ; 
    return 0 ;
}