#include<bits/stdc++.h>

using namespace std ;

int main() {
    int n ; 
    cin >> n; 

    while(n%10 == 0) n /= 10 ;

    while(n){
        cout << n%10 ;
        n /= 10; 
    }

    return 0 ;
}