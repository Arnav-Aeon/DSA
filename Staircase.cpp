#include <bits/stdc++.h>

using namespace std ;

int staircase(int n){
    int count = 0 ;

    if(n == 0){
        return 1 ; 
    }

    if(n >= 3){
        count += staircase(n-3) ; 
    }

    if(n >= 2){
        count += staircase(n-2);
    }
    if(n >= 1){
        count += staircase(n-1) ; 
    }

    

    return count ; 
}

int main(){
    int num ; 
    cin >> num ; 

    cout << staircase(num) ; 
}