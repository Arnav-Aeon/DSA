#include <bits/stdc++.h>

using namespace std ; 


void printAllPossibleCodes(string input , string output = "") {
    if(input.empty()){
        cout << output << endl ; 
        return ; 
    }
    char c = char(int(input[0] - 48)+96);
    printAllPossibleCodes(input.substr(1) , output + c) ;
    if((input.substr(1)).empty()) return ; 
    int num = (int(input[0])-48)*10 + int(input[1] - 48) ; 
    if(num > 26) return ;
    printAllPossibleCodes(input.substr(2) , output + char(num + 96)) ; 
}


int main(){
    string input ; 
    cin >> input ;

    printAllPossibleCodes(input) ; 
    return 0 ; 
}