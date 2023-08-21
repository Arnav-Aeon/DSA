#include<bits/stdc++.h>

using namespace std ;

double func(double x){
    return x*x*x - x*x + 2 ; 
}

double derfunc(double x) { 
    return 3*x*x - 2*x ;
}

int main() {
    double x0 = -20 ;
    double e = 0.001 ; 

    double h = func(x0)/derfunc(x0) ; 
    while(abs(h) >= e){
        x0 = x0 - h ; 
        h = func(x0)/derfunc(x0) ; 
    } 

    cout << "root : " <<  x0 ; 
    return 0  ; 
}