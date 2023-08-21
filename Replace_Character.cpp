#include <iostream>
#include <cstring>
using namespace std;

void replaceCharacter(char input[], char c1, char c2) {
    while(*input != '\0'){
        if(*input == c1){
            *input = c2 ; 
        }
        ++input ; 
    }
}

int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}