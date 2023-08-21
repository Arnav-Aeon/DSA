#include <bits/stdc++.h>
#include <cstring>
using namespace std ;

int size_char(char input[]){
    int i = 0 ;
    while(input[i] != '\0') ++i ; 
    return i ;
}

bool checkPalindrome(char input[] , int t = 0) {
    if(input[t] == '\0') return true ;
    else if(input[t] == input[size_char(input) - t - 1]){
        ++t ; 
        return checkPalindrome(input , t) ; 
    }
    else return false ; 

}


int main() {
    char input[50];
    cin >> input ;  
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    return 0 ; 
}