#include <bits/stdc++.h>

using namespace std ; 

int firstIndex(int *arr, int size, int x , int t = 0) {
    if( size < 0) return  -1;
    if(arr[0] == x) return t ;
    t++ ; 
    return firstIndex(arr+1 , size - 1 ,  x , t) ; 
}


int main(){
    int n ; 
    cin >> n ; 
    int *arr = new int[n] ; 
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i]; 
    }
    int x ; 
    cin >> x ; 
    cout<< firstIndex(arr , n , x) ; 

    delete [] arr ; 
    return 0 ; 
}