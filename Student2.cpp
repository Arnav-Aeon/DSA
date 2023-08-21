#include <iostream>
using namespace std ; 
class Student{

    public :
    int age ;
    char *name ; 
    static int totalStudents ;

    public:
    Student(int age , char *name){
        this -> age = age ; 
        totalStudents++ ; 
        // Shallow copy 
        // this -> name = name ;

        // Deep Copy
        this -> name = new char[strlen(name) + 1] ; 
        strcpy(this -> name , name ) ; 
    }

    // inbuilt copy constructor does shalow copy

    // Copy Constructor
    Student(Student &s){
        this -> age = s.age ; 
        this -> name = new char[strlen(s.name) + 1] ; 
        strcpy(this -> name , s.name) ; 
        totalStudents++ ; 
    }

    static int getTotalStudents(){
        return age ; 
    }

    void display(){
        cout << this -> name << " " << this -> age << endl; 
    }
};

int Student :: totalStudents = 0 ; 