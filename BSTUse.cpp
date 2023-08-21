#include <bits/stdc++.h>
#include "BST_Class.h"
using namespace std ;

int main(){
    BST B ; 
    B.insert(4) ; 
    B.insert(3) ; 
    B.insert(2) ; 
    B.insert(5) ;
    B.insert(6) ; 
    B.insert(8) ;
    B.insert(7) ; 
    B.insert(9) ; 
    
    cout << B.search(1)  << " " << B.search(2) << endl; 
    B.print() ; 
    B.deleteData(5) ; 
    cout << "final answer" << endl ; 
    B.print() ;
    return 0 ; 
}
