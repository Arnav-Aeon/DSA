#include<bits/stdc++.h>

using namespace std ; 

int main(){
    double n , m , a ;
    cin >> n >> m >> a ; 

    int total ; 
    

    if(n < a && m < a){
        total = 1 ;
    }

    else if(n < a && m > a){
        total = m/a ;
    }

    cout << total ;
    return 0 ; 
}