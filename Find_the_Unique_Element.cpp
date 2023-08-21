#include <bits/stdc++.h>

using namespace std ;

int findUnique(int *arr , int n){
    sort(arr , arr+n) ; 
    if(arr[0] != arr[1]){
        return arr[0] ; 
    }
    for(int i = 1 ; i < n-1 ; ++i){
        if(arr[i] != arr[i+1] && arr[i] != arr[i-1]){
            return arr[i] ;
        }
    }
    return arr[n-1] ; 
}

int main(){
    int t;
    cin >> t ;
    while(t--){
        int size ;
        cin >> size ;
        int* input = new int[size];

        for(int i = 0 ; i < size ; ++i){
            cin >> input[i] ;
        }
        cout << findUnique(input , size) << endl ;
    }
    return 0 ; 
}