#include <iostream>
using namespace std;
#include "ComplexNumbers.cpp"

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        (c1 += c2) ; 
        c1.print();
    }
    else if(choice == 2) {
        ComplexNumbers c3 = c1 * c2 ; 
        c3.print();
    }
    else {
        return 0;
    }

    if(c1 == c2){
        cout << "Equal " << endl ; 
    }

    else if(c1 != c2){
        cout << "Unequal" << endl ;
    }


}