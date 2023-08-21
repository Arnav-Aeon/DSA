#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool checkRedundantBrackets(string expression) {
    stack<char> s ;
    bool temp = false ;
    int diff ;
    for(int i = 0 ; i < expression.size() ; ++i){
        if(expression[i] == '(' && expression[i+1] == '('){
            s.push(expression[i]) ;
            s.push(expression[++i]) ; 
            temp = true ; 
            i++ ;
            diff = i ; 
        }
        else if(expression[i] == '('){
            s.push(expression[i]) ; 
            diff = i ; 
        }
        else if(temp == true && expression[i] == ')' && expression[i+1] == ')'){
            return true ;
        }
        else if(expression[i] == ')'){
            temp = false; 
            s.pop() ;
            if(diff+1 == i || diff+2 == i) return true ;
        }
    }
    return false ; 
}

int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}