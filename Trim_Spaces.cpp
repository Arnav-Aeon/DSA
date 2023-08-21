#include <iostream>
#include <cstring>
using namespace std;

int len(char input[]){
    int count = 0;
    while (input[count] != '\0'){
        count++ ;
    }
    return count ; 
}

void del(char input[] , int k , int size){
    for(int i = k ; i < size-1 ; ++i){
        input[i] = input[i+1] ; 
    }
    input[size-1] = '\0' ; 
}

void trimSpaces(char input[]) {
    int size = len(input) ; 
    for(int i = 0 ; i < size ; ++i){
        if(input[i] == ' ' || input[i] == '\t'){
            del(input , i , size) ; 
            i--;
        }
    }
}
int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

