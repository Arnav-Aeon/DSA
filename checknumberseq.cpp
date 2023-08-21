#include<bits/stdc++.h>

using namespace std ; 

int dec(int *arr , int n){
    int count = 0 ; 
    while(*(arr+count) > *(arr+count+1)){
        count++ ;
        if(count == n-1) break ; 
    }
    return count ;
}

int inc(int *arr , int count , int n ){
    while(*(arr+count) < *(arr+count+1)){
        count++ ;
        if(count == n-1) break ; 
    }
    return count ; 
}

int main() {
    int n ; 
    cin >> n ; 
    int arr[n] ; 
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i];
    }


    int i = dec(arr , n ) ; 

    if(i == n-1){
        cout << "true" ; 
    }
    else{
        if(inc(arr , i , n ) == n-1){
            cout << "true" ; 
        }
        else{
            cout << "false" ; 
        }
    }
    return 0 ; 
}