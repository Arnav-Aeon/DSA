#include<bits/stdc++.h>

using namespace std ;

int main() {
    vector<int> v ; 
    int n ; 
    cin >> n ; 
    int sum_even = 0 , sum_odd = 0 ; 
    while(n){
        v.push_back(n%10);
        n/=10 ;
    }

    for(auto it = v.begin() ; it != v.end() ; it++ ){
        if(*it % 2 == 0){
            sum_even += *it ; 
        }
        else {
            sum_odd += *it ;
        }
    }

    cout << sum_even << " " << sum_odd ; 
    return 0 ; 
}