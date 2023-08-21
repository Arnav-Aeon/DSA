#include <iostream>
#include <cstring>
using namespace std;

void shift(char input[] , int n){
    while(input[n] != '\0'){
        input[n] = input[n+1] ; 
        n++ ; 
    }
}

void removeConsecutiveDuplicates(char input[]) {
    int i = 0; 
    while(input[i+1] != '\0'){
        if(input[i] == input[i+1]){
            shift(input , i+1) ;
            i-- ;    
        }
        i++ ; 
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}