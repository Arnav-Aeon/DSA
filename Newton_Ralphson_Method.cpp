#include<bits/stdc++.h>
#define e 0.01

using namespace std ; 

double func(double x){
    return x*x*x - x*x + 2 ;
}

double derivfunc(double x){
    return 3*x*x - 2*x ; 
}

double newton(double x){
    double h = func(x)/derivfunc(x) ; 
    int count = 0 ; 

    cout << "Itteration\t" << "Value of x_r\t" << "Value of f(x_r)" << endl;

    while(abs(h) > e){
        x = x - h ; 
        h = func(x)/derivfunc(x) ; 
        count++ ; 
        cout << count << '\t' << x << '\t' << func(x) << endl ; 
    }

    return x ; 
}

int main() {
    double seed = 10; 
    double root = newton(seed) ; 

    cout << "The root of the function is: " << root  ;
}