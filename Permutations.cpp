#include <bits/stdc++.h>

using namespace std;

int main() {
    int n ;
    cin >> n ;
    if(n < 4 && n  > 1){
        cout << "NO SOLUTION" ;
    }

    else if(n == 1){
        cout << 1;
    }

    else if(n == 4){
        cout << "2 4 1 3    " ; 
    }

    else{ 
        vector<int> v ; 
        for(int i = n ; i > 0 ; --i){
            v.push_back(i);
        }
        for(auto it = v.begin() ; it!= v.end() ; it++ ){
            if(*it % 2 == 0 ){
                cout << *it << " ";
            }
        }

        for(auto it = v.begin() ; it!= v.end() ; it++){
            if(*it % 2 != 0 ){
                cout << *it << " ";
            }
        }
    }

    return 0 ; 
    
}