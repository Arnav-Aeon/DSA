#include <bits/stdc++.h>
using namespace std ;

#include "Student2.cpp"

int main(){
    char name[] = "abcd" ; 
    Student s1(20 , name) ; 
    s1.display() ; 

    Student s2(s1) ; 
    s2.name[0] = 'x' ;
    s1.display() ; 
    s2.display() ;

    s1 = s2 ; // calls the default copy constructor
    s1.name[0] = 'y' ; 
    s1.display() ; 
    s2.display() ; 

    cout << endl << Student :: totalStudents << endl  ;

    cout << Student :: getTotalStudents() << endl ;



}
