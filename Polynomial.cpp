#include <bits/stdc++.h>
using namespace std ;

class Polynomial{ 
    int capacity ; 

    public :
    int *degCoeff ;

    Polynomial(){
        this -> degCoeff = new int[1] ;
        for(int i = 0 ; i < 1 ; ++i){
            this -> degCoeff[i] = 0 ; 
        }
        this -> capacity = 1; 
    }
    

    Polynomial(int n){
        this -> degCoeff = new int[n] ;
        for(int i = 0 ; i < n ; ++i){
            this -> degCoeff[i] = 0 ; 
        }
        this -> capacity = n ; 
    }

    Polynomial(Polynomial const &P){
        this -> degCoeff = new int[P.capacity] ; 
        for(int i = 0 ; i < P.capacity ; ++i ){
            this -> degCoeff[i] = P.degCoeff[i] ;
        }
    }

    void setCoefficient(int degree , int coeff){
        if(degree >= this -> capacity){
            int *arr = new int[degree+1] ;
            for(int i = 0 ; i < this -> capacity ; ++i){
                arr[i] = this -> degCoeff[i] ; 
            }
            for(int i = this -> capacity ; i < degree + 1 ; ++i){
                arr[i] = 0 ; 
            }
            delete[] this -> degCoeff ; 
            degCoeff = arr ; 
            this -> capacity = degree+1 ;
        }

        this -> degCoeff[degree] = coeff ; 
    }

    Polynomial operator+(Polynomial const &P){
        int t1 = min(P.capacity , this -> capacity) ;
        int t2 = max(P.capacity , this -> capacity) ;
        Polynomial newP(t2) ; 
         
        for(int i = 0 ; i < t1 ; ++i){
            newP.degCoeff[i] = this -> degCoeff[i] + P.degCoeff[i] ; 
        }
        if(P.capacity > this -> capacity) {
            for(int i = t1 ; i < t2 ; ++i){
                newP.degCoeff[i] = P.degCoeff[i] ; 
            }
        }

        else{
            for(int i = t1 ; i < t2 ; ++i){
                newP.degCoeff[i] = this -> degCoeff[i] ; 
            }
        }

        return newP ; 

    }

    Polynomial operator-(Polynomial const &P){
        int t1 = min(P.capacity , this -> capacity) ;
        int t2 = max(P.capacity , this -> capacity) ;
        Polynomial newP(t2) ; 
         
        for(int i = 0 ; i < t1 ; ++i){
            newP.degCoeff[i] = this -> degCoeff[i] - P.degCoeff[i] ; 
        }
        if(P.capacity > this -> capacity) {
            for(int i = t1 ; i < t2 ; ++i){
                newP.degCoeff[i] = -P.degCoeff[i] ; 
            }
        }

        else{
            for(int i = t1 ; i < t2 ; ++i){
                newP.degCoeff[i] = this -> degCoeff[i] ; 
            }
        }

        return newP ; 
    }

    Polynomial operator*(Polynomial const &P){
        int t = P.capacity + this -> capacity - 1 ;
        Polynomial newP(t) ; 

        for(int i = 0 ; i < P.capacity ; ++i){
            for(int j = 0 ; j < this -> capacity ; ++j){
                newP.degCoeff[i + j] += P.degCoeff[i] * this -> degCoeff[j] ;
            }
        }

        return newP ; 
        

    }

    void print(){
        for(int i = 0 ; i < this -> capacity ; ++i){
            if(degCoeff[i] == 0) continue ; 
            cout << this -> degCoeff[i] << "x" << i << " " ; 
        }
        cout << endl ; 
    }
} ; 