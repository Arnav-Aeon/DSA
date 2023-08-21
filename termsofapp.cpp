#include<bits/stdc++.h>

using namespace std ;

int main() {
    int n ; 
    cin >> n ; 
    int t = 1 ;
    for(int i = 1 ; i <= n ; ++i , ++t){
        if( (3*t+2)%4 == 0 ){
            t++ ;
        }
        cout << 3*t+2 << " ";
    }
    return 0 ;
}