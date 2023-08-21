#include<bits/stdc++.h>

using namespace std ; 

bool checkMember(int n){
    int a = 1 , b = 1 ; 
    int an ;

    bool t = false ;

    while(n > b){
        an = a + b ;    
        a = b ;
        b = an ;

    }
    if(n == an) t = true ;
    return t ;
}

int main() {
    int n ; 
    cin >> n ;
    cout << checkMember(n) ;

    return 0 ;
}