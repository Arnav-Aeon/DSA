#include <bits/stdc++.h>

using namespace std ; 

int pagecount(int n , int p){
    //start from start 
    int start = p/2 ;
    int end ;
    if(p%2 == 0) end = (n-p)/2;
    else end = (n-p+1)/2;
    if(end > start){
        return start ;
    }

    return end ; 
}

int main(){
    int n , p ; 
    cin >> n >> p ; 
    cout << pagecount(n , p) ;

    return 0 ;
}