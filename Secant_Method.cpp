#include<bits/stdc++.h>
#define e 0.00001


using namespace std ; 

double f(double x){
    return x*x*x - x*x + 2 ; 
}

double secant(double a , double b){
    double t ; 
    int it = 100 ;
    int count = 0 ; 
    while(abs(b-a) > e){
        t = (f(b)*a - f(a)*b)/(f(b) - f(a)) ; 
        a = b ; 
        b = t ; 
        count++ ; 
        cout << count << '\t' << t << '\t' << f(t) << endl ;
        it-- ; 
    }
    return b ; 
}

int main(){
    cout << secant(-9 , 10) ; 
    return 0 ; 
}