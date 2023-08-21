#include<bits/stdc++.h>
#define e 0.01

using namespace std ;

double func(double x){
    return x*x*x - x*x + 2 ; 
}

double bisection(double a , double b){
    double c ; 
    int it = 0 ; 
    cout << "Itteration\t" << "Bisection(c)\t" << "Valur of f(c)" << endl;
    while((b-a) >= e){
        c = (a+b)/2;

        if(func(c) == 0.0){
            return c ;
        }
        if(func(c)*func(a) < 0){
            b = c ; 
        }
        else{
            a = c ; 
        }
        it++ ; 

        cout <<'\t' << it << '\t' << c << '\t' << func(c) << endl ; 
    }
    return c ; 
}
 
int main(){
    
    double a = -200 , b = 300 ;
    double c = bisection(a , b) ; 
    cout << "The root is " << c ;     
    return 0 ; 
}