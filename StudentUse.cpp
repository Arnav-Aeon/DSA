#include <bits/stdc++.h>
#include "Student.cpp"
using namespace std ;

int main(){
    // Creating object statically 
    Student s1; 

    // Creating object dynamically 
    Student *s = new Student ;
    Student *s3 = new Student[10];


    s1.setAge(24) ; 
    s1.rollNumber = 104 ; 

    s -> setAge(12) ; 
    s -> rollNumber = 102 ; 

    s1.display() ; 
    s->display() ; 

    

    // default constructors
    // copy constructor 
    Student s2(s1) ; 
    s2.display() ; 

    Student s4(10 , 1001) ; 
    Student s5(20 , 1002);

    s5 = s4 ; 
    s5.display() ; 

    delete[] s3 ; 

    return 0 ; 
}