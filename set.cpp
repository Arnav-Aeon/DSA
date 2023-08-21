#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> s; // defining a set 
    
    // taking a set from user 
    int n , temp ;
    cin >> n ;
    for(int i = 0 ; i < n ; ++i){
        cin >> temp ;
        s.insert(temp);
    }

    for(auto it = s.begin() ; it!=s.end() ; ++it){
        cout << *it <<endl ;
    }

    return 0;


}