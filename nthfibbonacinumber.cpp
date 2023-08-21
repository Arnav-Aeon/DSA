#include<bits/stdc++.h>

using namespace std ; 

int main() {
    int n ; 
    cin >> n ; 

    int a = 1 , b = 1 ; 

    if(n == 1 || n == 2){
        cout << 1 ;
    }
    else{
        int an ;
        for(int i = 2 ; i < n ; ++i){
            an = a+b ; 
            a = b;  
            b = an ; 
        }
        cout << an ; 
    }
    return 0 ; 

}