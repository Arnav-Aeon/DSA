// making a class stdent with two parameters
#include <iostream>
using namespace std  ; 

class Student{

    public:
    int rollNumber ; 

    private:
    int age ; 

    public:

    // Default Constructor
    Student(){
        cout << "Constructor called" << endl ;
    }

    // Paramaterised Constructor
    Student(int rollNumber){
        cout << "Constructor called" << endl ;
        this -> rollNumber = rollNumber ;   
    }

    Student(int rollNumber , int age){
        cout << "Constructor called" << endl ;
        this -> rollNumber = rollNumber ;  
        this -> age = age ; 
    }

    void display(){
        cout << "Age = " << age << endl ; 
        cout << "Roll Number = " << rollNumber << endl ; 
    }

    int getAge(){
        return age ;
    }

    void setAge(int a){
    if(a < 0){
        return ; 
    }
        age = a ;
    }


};