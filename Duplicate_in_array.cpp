#include <bits/stdc++.h>

using namespace std ; 

int findDuplicate(int *arr , int n ){
    sort(arr , arr+n) ; 
    if(arr[0] == arr[1]){
        return arr[0] ;
    }
    for(int i = 1 ; i < n-1 ; ++i){
        if(arr[i] == arr[i+1] || arr[i] == arr[i-1]){
            return arr[i] ;
        }
    }

    return arr[n-1] ; 
}

int main(){
    int t ; 
    cin >> t ; 
    while(t--){
        int length ; 
        int *input = new int[length] ; 
        for(int i = 0 ; i < length ; ++i){
            cin >> input[i] ; 
        }
        cout << findDuplicate(input , length) ;
        delete[] input ; 
    }
    return 0 ; 
}