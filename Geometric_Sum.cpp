#include <bits/stdc++.h>
#include <cmath>
using namespace std ; 

double geometricSum(int k){
    if(k < 0) return 0 ; 
    return pow(2 , -k) + geometricSum(k-1) ;
}

int main() {
    int k ; 
    cin >> k ; 
    cout << geometricSum(k) ; 
}