#include<bits/stdc++.h>
#include<vector>

using namespace std;

int find_n_remove(vector<int> v , vector::iterator p){
    for(auto it = v.begin() ; it != ++p ; it++){
        if(*it == *p){
            v.erase(it);
            v.erase(p);
        }
    }
    return 1;
}

int main(){
    int n; 
    cin >> n ;
    vector<int> v , t;
    for(int i = 0 ; i < n ; ++i){
        v.push_back(i);
    }
    int temp = 0;
    for(auto it = v.begin() ; it!= v.end() ; it++){
        if(find_n_remove(v , it) == 1){
            temp = 0;
        }
        else{
            temp ++;
        }

        t.push_back(temp);

    }
    int max = *(v.begin());
    for(auto it=v.begin() ; it!=v.end() ; ++it){
        if(*it > max){
            max = *it;
        }
    }

    cout << max; 
    return 0 ;
}