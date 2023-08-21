#include<bits/stdc++.h>

using namespace std;


int main() {
    
    int n , temp;
    int v[5] = {0};
    cin >> n ;
    for(int i = 0 ; i < n ; ++i){
        cin >> temp ;
        ++v[temp-1];
    }
    int max = v[0] , index = 0;
    for (int i = 1; i < 5 ; ++i){
        if(v[i] > max){
            max = v[i];
            index = i;
        }
    }
    cout << ++index ;

    return 0 ;
    
}