#include <bits/stdc++.h>

using namespace std;

int main(){

    set<int> s;
    int n , temp ;
    cin >> n ; 
    for(int i = 0 ; i < n ; ++i){
        cin >> temp;
        if(s.find(temp) == s.end()){
            s.insert(temp);
        }
    }
    cout << s.size() ; 
    return 0 ; 
}