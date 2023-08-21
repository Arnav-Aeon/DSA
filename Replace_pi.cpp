#include <bits/stdc++.h>

using namespace std ;

void replacePi(char input[]){
    if(input[0] == '\0') return ;
    else if(input[0] == 'p' && input[1] == 'i'){
        for(int i = strlen(input) ; i >= 2 ; i--){
            input[i+2] = input[i] ;
        }
        input[0] = '3' ; 
        input[1] = '.' ;
        input[2] = '1' ; 
        input[3] = '4' ; 
        return replacePi(input+4) ; 
    }
    else return replacePi(input+1) ; 
}

int main() {
    char input[10000] ;
    cin.getline(input , 10000) ; 
    replacePi(input) ; 
    cout << input << endl ;
    return 0;  
}