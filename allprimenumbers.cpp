    #include <bits/stdc++.h>

    using namespace std ; 

    bool prime(int x) {
        bool t = true ;
        for(int i = 2 ; i < x ; ++i){
            if(x%i == 0){
                t = false ; 
                break ; 
            }
        }
        return t ;
    }

    int main() {
        int n ; 
        cin >> n ; 
        if(n >= 2)cout << 2 << endl ; 

        for(int i = 3 ; i <= n ; ++i){
            if(prime(i)){
                cout << i << endl ; 
            }
        }
        return 0 ;
    }