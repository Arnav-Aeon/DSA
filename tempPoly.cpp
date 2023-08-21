#include "Polynomial.cpp"

int main() {

    Polynomial p1 ;
    p1.setCoefficient(2 , 3) ; 

    Polynomial p2 ;
    p2.setCoefficient(4 , 3) ; 

    Polynomial p3 = p2 - p1 ; 
    p3.print() ; 
}