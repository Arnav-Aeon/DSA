#include<bits/stdc++.h>

using namespace std ;


int main() {

    int m , n ; 
    cin >> m >> n ; 
    int arr[1000][1000] ; 
    for(int i = 0 ; i < m ; ++i){
        for(int j = 0 ; j < n ; ++j){
            cin >> arr[i][j] ; 
        }
    }
    int sum = 0 ; 
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < m ; ++j){
            sum += arr[j][i] ;
        }
        cout << sum << ' ' ; 
        sum = 0 ; 
    }
    return 0 ; 
}