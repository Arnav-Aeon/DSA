#include<bits/stdc++.h>

using namespace std ; 

int count(int n){
    if(n > 0) return 1 + count(n/10);
    return 0 ;
}

int main(){
    int n ; 
    cin >> n ; 
    cout << count(n);
}