#include<bits/stdc++.h>

using namespace std ; 

int main() { 
    int n ; 
    cin >> n ;

    char sum ; 
    int a ;
    int b ; 
    vector<int> v ; 

    for(int i = 0 ; i < n ; ++i){
        cin >> a ;
        cin >> sum ;
        cin >> b ;

        v.push_back(a+b) ; 
    }

    for(auto it = v.begin()  ; it != v.end() ; ++it){
        cout<< *it << endl  ;
    }
    return 0; 
}