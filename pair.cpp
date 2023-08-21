#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int , int>> p;
    p.push_back({1,2});
    p.push_back({5,2});
    p.push_back({8,1});
    p.push_back({1,2});
    p.push_back({3,4});

    sort(p.begin() , p.end());

    for(auto it = p.begin() ; it!=p.end() ; ++it){
        cout << it->first << it->second << endl ;
    }
    return 0;
}