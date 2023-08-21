#include<bits/stdc++.h>

using namespace std ;

int main () {
    int n ,k , temp , total = 0;
    cin >>  n ;
    cin >> k ;
    vector<int> v ; 
    for(int i = 0; i < n ; ++i){
        cin >> temp ;

        v.push_back(temp);
    }

    for(auto it = v.begin() ; it!=v.end() ; it++ ){
        for(auto jt = it+1 ; jt!=v.end() ; jt++ ){
            if((*it + *jt)%k == 0){
                total += 1;
            }
        }
    }
    cout << total;
    
}