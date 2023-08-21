#include <iostream>
#include <string>
#include <stack>
using namespace std;

int countBracketReversals(string input) {

    if(input.size()%2 != 0) return -1 ; 
    stack<int> s ;
    int count = 0 ; 
    for(int i = 0 ; i < input.size() ; ++i){
        if(!s.empty() && s.top() == '{' && input[i] == '}'){
            s.pop() ; 
        }
        else{
            s.push(input[i]) ; 
        }
    }

    while(!s.empty()){
        int a = s.top() ; 
        s.pop() ; 
        int b = s.top() ;
        s.pop() ; 
        if(a == b){
            count++ ; 
        }
        else{
            count += 2 ; 
        }
    }

    return count ; 
}

int main() {
    string input;
    cin >> input;
    cout << countBracketReversals(input);
}