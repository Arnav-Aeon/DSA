#include<bits/stdc++.h>

using namespace std ; 

void removeX(char input[]){
    if(input[0] == '\0') return ; 
    else if(input[0] == 'x'){
        for(int i = 1 ; i <= strlen(input) ; ++i){
            input[i - 1] = input[i] ; 
        }
        return removeX(input) ; 
    }
    return removeX(input + 1) ; 
}

int main() {
    char s[100] ; 
    cin.getline(s , 100) ; 
    removeX(s) ; 
    cout << s << endl ; 
    return 0 ; 
}