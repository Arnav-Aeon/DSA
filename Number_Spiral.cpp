#include <bits/stdc++.h>

using namespace std;

int main (){

    long long t ;
    cin >> t ; 
    while(t--){
        long long r ,c ; 
        cin >> r >> c;
        long long  a = max(r,c);
        long long  b = (a-1)*(a-1) , q = a*a;

        if(b%2 != 0){
            if(r>c){
                cout  << q + 1 - c ; 
            }
            else{
                cout << b + r;
            }
        }
        else{
            if(r>c){
                cout << b + c;
            }
            else{
                cout << q + 1 - r;
            }
        }
        cout << endl ; 
    }

    return 0 ;

}