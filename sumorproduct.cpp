#include<bits/stdc++.h>

using namespace std ;

int main() {
    int n ; 
    cin >> n ; 

    int c ; 
    cin >> c; 

    if(c = 1){
        cout << ((n)*(n+1))/2 ; 
    }
    else if(c = 2){
        int pro = 1; 
        for(int i = 1 ; i <= n ; ++i) {
            pro *= i ; 
            cout << pro << endl ; 
        }
        cout << pro ; 

    }
    else{
        cout << -1 ; 
    }
}