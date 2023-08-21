#include<bits/stdc++.h>

using namespace std ;\

void swap(int *a , int *b){
    int t = *a ; 
    *a = *b ; 
    *b = t ; 

}

int main(){
     
    int n ;
    cin >> n ;
    int arr[n] ; 
    for(int i = 0  ; i < n ;++i){
        cin >> arr[i] ; 
    }

    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n ; ++j){
            if(*(arr+j) > *(arr+1+j)){
                swap(arr+j , arr+1+j) ; 
            }

            
        }
    }

    for(int i = 0 ; i < n ; ++i){
        cout << *(arr+i) << " " ;
    }

    return 0 ; 
}

// worst case O(n^2) , best case O(1)