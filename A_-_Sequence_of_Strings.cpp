#include <bits/stdc++.h>

using namespace std ;

int main() {
    int n ;
    cin >> n ;
    string arr[n] ; 
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i] ; 
    }

    for(int i = 0 ; i < n ; ++i){
        cout << arr[n-i-1] << endl;
    }

    return 0 ;
}