#include <bits/stdc++.h>
using namespace std ; 

class List{
    int *data ; 
    int next ; 
    int size ; // total size

    public: 

    List(){
        this -> data = new int[5] ; 
        this -> next = 0 ; 
        this -> size = 5 ; 
    }

    void append(int num){
        if(this -> next == this -> size){
            int *newData = new int[2 * this -> size] ; 
            for(int i = 0 ; i < this -> size ; ++i){
                newData[i] = data[i] ; 
            }
            delete[] data ; 
            data = newData ; 
            this -> size *= 2 ;
            delete[] newData ;
        }

        this -> data[this -> next] = num  ;
        this -> next++ ; 
    }

    int get(int i){
        return data[i] ; 
    }

    int len(){
        return next ; 
    }

};