#include<bits/stdc++.h>
#define e 0.00001
#define N 100000
using namespace std ;

double f(double x){
    return x*x*x*x*x - 5 ; 
}

double g(double x){
    return sqrt(624)/pow(x , 3/2)  ; 
}

int main(){
    int x0 = 2 ; 
    int x = g(x0) ; 
    int step = 0 ; 
    while(abs(f(x0)) > e){  
        if(step > N) {
            cout << "Non Convergent" << endl ;
            return 0 ; 
        }
        x = g(x0) ;
        x0 = x ;  
        step++ ; 
    }

    cout << x0 ; 

    return 0 ;  
}