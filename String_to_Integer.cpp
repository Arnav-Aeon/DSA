#include <bits/stdc++.h>
#include <cmath>
using namespace std ; 

int stringToNumber(char input[]) {
    if(input[0] == '\0' ) return 0 ;
    int t = input[0] - 48 ;
    return stringToNumber(input + 1) +  t*pow(10 , strlen(input) - 1) ; 
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}