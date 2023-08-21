#include <bits/stdc++.h>
using namespace std ; 

int main(){
    int n , k ; cin >> n >> k ; 
    int *input = new int[n] ; 
    for(int i = 0 ; i < n ; ++i){
        cin >> input[i] ;
    }
    int sum = 0 , count = 0; 
    int next ;
    for(int i = 0 ; i < n ; ++i){
        cout << sum << " "; 
        if(sum == 0){
            next = i + 1 ; 
            cout << next << endl ;
        }
        if(sum < k){
            sum += input[i] ; 
        }
        else if(sum == k){
            sum = 0 ; 
            i = next ; 
            count++ ; 
        }
        else{
            sum = 0; 
            i = next ; 
        }
    }
    cout << count << endl ;
    delete input ; 
}