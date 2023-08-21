#include<bits/stdc++.h>

using namespace std;

int main() {
    set<char , greater<char>> s = {'T' , 'i' , 'm'  , 'u', 'r'};
    vector<string> v; 
    int n ;
    cin >> n ; 
    int size;
    string k ; 
    bool val = true;
    for(int i = 0 ; i < n ; ++i){
        cin >> size;
        cin >> k ;
        if(size != 5){
            v.push_back("NO");
        }
        else{
            for(int i = 0 ; i < 5 ; ++i){
                if(s.count(k[i]) ==  0){
                    val = false;
                }
            }
            if(val == true){
                v.push_back("YES");
            }
            else{
                v.push_back("NO");
            }
        }
        val = true;
        
    }

    for(auto it = v.begin() ; it != v.end() ; ++it){
        cout << *it << endl; 
    }
}