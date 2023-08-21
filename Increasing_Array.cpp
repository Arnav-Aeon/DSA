#include <bits/stdc++.h>

using namespace std ;

int main() {
    int n ; 
    cin >> n ; 
    vector<long long int> v ; 
    long long int t ;
    for(int i = 0 ; i < n ; ++i){
        cin >> t ; 
        v.push_back(t);
    }
    long long int moves = 0 ;
    for(auto it = v.begin() ; it!= --v.end() ; ++it){
        
        if(*it > *(it+1)){
            moves +=  *it - *(it+1);
            *(it+1) = *it;
        }
    }
    cout << moves;
    return 0 ; 
}