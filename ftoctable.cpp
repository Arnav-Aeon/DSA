#include<bits/stdc++.h>

using namespace std ; 

int conversion( int a ){
    return (a-32)*(5.0/9) ; 
}

int main() {
    int s , e , w ;
    cin >> s >> e >> w ; 

    int curr = s ; 
    while(curr <= e){
        cout << curr << " " << conversion(curr) << endl ; 
        curr += w ; 
    }
}