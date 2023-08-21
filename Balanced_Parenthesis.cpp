#include <iostream>
#include <string>
using namespace std;

#include <stack>

bool isBalanced(string expression) {
    stack<char> s ; 
    bool ans = true ; 
    for(int i = 0 ; i < expression.length() ; ++i){
        if(expression[i] == '('){
            s.push(expression[i]) ;
        }
        else if(expression[i] == ')'){
            if(s.empty() || s.top() != '('){
                return false ; 
            }
            s.pop() ;
        }
    }
    return s.empty() ; 
}

int main() 
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}