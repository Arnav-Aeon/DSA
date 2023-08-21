#include <bits/stdc++.h>

using namespace std ; 

int lastindex(int *input , int size , int x){
    if(size < 0) return -1 ;
    if(input[size-1] == x) return size - 1 ; 
    return lastindex(input , size-1, x) ;
}

int main(){
    int n ;
    cin >> n ; 
    int *arr = new int[n] ; 
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i] ; 
    }
    int x ; 
    cin >> x ; 
    cout << lastindex(arr , n , x) ; 
    delete [] arr ; 
    return 0 ; 
}