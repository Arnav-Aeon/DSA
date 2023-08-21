#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(char input[]) {
    int k ;
    for(int i = 0 ; input[i] != '\0' ; ++i){
        for(int j = i+1 ; j < strlen(input)+1 ; ++j){
            k = i ;
            while( k<j ){
                cout << input[k] ;
                ++k ; 
            }
            cout << endl ; 
        }
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}