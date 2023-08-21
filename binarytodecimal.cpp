#include<bits/stdc++.h>

using namespace std ;

int main(){
    int n ; 
    cin >> n ; 
    int p = 0 ;
    int dec = 0;
    while(n){
        dec+= (n%10)*pow(2,p) ; 
        p++; 
        n /= 10 ; 
    }  
    cout << dec ; 
    
    return 0 ;
}