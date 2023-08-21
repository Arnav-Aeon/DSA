#include<bits/stdc++.h>

using namespace std ;


int countZeros(int n , int t = 0) {
    if(n == 0) return t+1 ; 
    if(n < 10) return t ; 
    if(n%10 == 0) ++t ; 
    return  countZeros(n/10 , t) ; 

}

int main(){
    int n  ; 
    cin >> n ; 
    cout << countZeros(n) ; 
    return 0 ; 
}