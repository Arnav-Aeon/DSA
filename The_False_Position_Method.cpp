#include<bits/stdc++.h>
#define max_it 100000

using namespace std ; 

double func(double x){
    return x*x*x - 2*x - 5 ; 
}

double false_position(double a , double b){
    double x ;
    int i = max_it ; 
    while(i){
        x = (a*func(b) - b*func(a))/(func(b) - func(a)) ;  
        if(func(x)*func(a) < 0){
            b = x ; 
        }
        else{
            a = x ; 
        }

        i-- ; 
    }
    return x ; 
}

int main(){
    double a = -200 , b = 300 ; 
    double root = false_position(a , b) ; 
    cout << "The root is: " << root ; 
    return 0 ; 
}