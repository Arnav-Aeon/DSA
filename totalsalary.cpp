#include<bits/stdc++.h>

using namespace std ; 

int main () {
    float basic ; 
    cin >> basic ; 

    float hra , da , allow , pf ;

    hra = 0.2 * basic ;
    da = 0.5 * basic ; 
    pf = 0.11 * basic ; 

    char grade ; 
    cin >> grade ; 
    if(grade == 'A'){
        allow = 1700 ; 
    }

    else if(grade == 'B'){
        allow = 1500 ; 
    }

    else{
        allow = 1300 ; 
    }
    float total = basic + hra + da + allow - pf ;
    cout << fixed << setprecision(0) << total ; 
}