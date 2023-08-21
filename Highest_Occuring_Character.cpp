#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) {
    int ascii[256] ;
    for(int i = 0 ; i < 256 ; ++i){
        ascii[i] = 0 ; 
    } 
    int i = 0 ; 
    while(input[i] != '\0'){
        ++ascii[int(input[i])] ; 
        ++i ; 
    }

    int max_index = 0 ;
    for(int i = 0 ; i < 256 ; ++i ){
        if(ascii[i] > ascii[max_index]){
            max_index = i ; 
        }
    }

    char c = max_index; 
    return c; 
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}