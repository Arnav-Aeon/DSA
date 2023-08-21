#include<bits/stdc++.h>

using namespace std ; 

int main() {
    int n ; 
    cin >> n ;
    vector<int> v ; 
    int temp ; 
    int t ; 
    int count = 0 ;  
    for(int i = 0 ; i < n ; ++ i){
        cin >> t; 
        for(int j = 0 ; j < t ; ++j){
            cin >> temp ; 
            if(temp % 2 != 0){
                count++ ; 
            }
        }
        v.push_back(count) ; 
        count = 0 ; 
    }

    for(auto it = v.begin()  ; it != v.end() ; ++it){
        cout<< *it << endl  ;
    }
    return 0 ;
}