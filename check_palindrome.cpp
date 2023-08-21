#include <bits/stdc++.h>
#include <cstring> 

using namespace std ; 

bool checkPalindrome(char str[]) {
    int len = 0 ; 
    while(*(str+len) != '\0'){
        len++ ;
    }
    
    bool n = true ;
    for(int i = 0 ; i < len/2 ; ++i){
        if(str[i] == str[len-i-1]){
            n = true ; 
        }
        else{
            n = false  ;
            break ;
        }
    }
    return n;
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}