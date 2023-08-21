#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    int arr[n] ;
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i] ;
    }
    sort(arr , arr+n);

    int max = arr[n-1] ;

    int t = INT_MIN ; 

    for(int i = n-1 ; i >= 0 ; --i){
        if(arr[i] < max){
            t = arr[i] ; 
            break ; 
        }
    }

    cout << t ; 
    

    return 0 ;
}