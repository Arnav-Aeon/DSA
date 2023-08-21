#include <bits/stdc++.h>

using namespace std ;

void merge(int input[] , int start , int mid , int end){
    int size = end - start + 1 ;
    int i = start , j = mid+1 ;
    int temp ; 
    for(int k = start ; k < size ; ++k){
        if(input[i] > input[j]){
            
        }
    }
}

void mergesort(int input[] , int start , int end){
    if(start >= end){
        return  ;
    }
    int mid = (start + end)/2 ; 
    mergesort(input , start , mid) ; 
    mergesort(input , mid+1 , end) ; 
    merge(input , start , mid , end) ; 
}

int main() {
    int n ;
    cin >> n ; 
    int* input = new int[n] ; 
    for(int i = 0 ; i < n ; ++i){
        cin >> input[i] ;
    }
    mergesort(input , 0 , n-1) ;
    for(int i = 0 ; i < n ; ++i){
        cout << input[i] << " " ;
    }

    return 0 ; 
}