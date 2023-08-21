#include <bits/stdc++.h>
#include<math.h>

using namespace std;

int main (){
    int n ; 
    long long k ; 
    cin >> n >> k ;
    vector<int> v;
    v.push_back(1); 
    int len;
    while(--n){
        len = v.size();
        v.push_back(v[round(v.size()/2)]+ 1);
        for(int i = 0 ; i < len ; ++i){
            v.push_back(v[i]);
        }
    }
    cout << v[k-1] ;
    return 0 ;
}