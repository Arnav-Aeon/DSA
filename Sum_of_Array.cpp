#include<bits/stdc++.h>

using namespace std ;

int sum(int *arr , int n){
    if(n > 0) return arr[n-1]+sum(arr , n-1) ; 
    return 0 ;
}

int main(){
    int n ; 
    cin >> n ; 
    int *arr = new int[n] ;
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i] ; 
    }
    cout << sum(arr , n);
    delete [] arr ; 
    
    return 0 ; 
}