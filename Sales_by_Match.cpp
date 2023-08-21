#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ;
    vector<int> v ; 
    int temp ; 
    for(int i = 0 ; i < n ; ++i){
        cin >> temp ; 
        v.push_back(temp) ; 
    }

    int arr[n][2] ; 
    int size = 1 ; 
    arr[0][0] = 1 , arr[0][1] = v[0] ; 
    for(int i = 1 ; i < n ; ++i){
        bool t = false ;
        for(int j = 0 ; j < size ; ++j){
            if(v[i] == arr[j][1]){
                arr[j][0]++ ; 
                t = true ;
                break ;
            }
        }
        if(t == false){
            arr[size][0] = 1 ;
            arr[size][1] = v[i];
            size++ ;
        }
    }
    int pairs = 0  ;
    for(int i = 0 ; i < size ; ++i){
        pairs += arr[i][0]/2 ;  
    }
    cout << pairs ; 
}