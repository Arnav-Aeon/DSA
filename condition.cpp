#include<bits/stdc++.h>

using namespace std ;

int main() {
    int b ; 
    char alpha ; 
    cin >> alpha ;
    b = int(alpha) ;

    if( b >= 97 && b <= 122){
        cout << 0 ; 
    }

    else if( b >= 65 && b <=90 ){
        cout << 1 ; 
    }

    else {
        cout << -1 ; 
    }
}