#include <bits/stdc++.h>
#include <cstring>

using namespace std ; 

void remove(char input[] , int index){
    int i = index ; 
    while(input[i] != '\0'){
        input[i] = input[i+1] ; 
        i++ ; 
    }
}

void removeAllOccurrencesOfChar(char input[], char c) {
    int i = 0 ;
    while(input[i] != '\0'){
        if(input[i] == c){
            remove(input , i) ; 
            i--;
        }
        i++ ; 
    }
}


int main(){
    int size = 1e6 ; 
    char str[size] ; 
    cin.getline(str , size) ; 
    char c ;
    cin >> c ;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
    return 0 ; 
}