#include <bits/stdc++.h>

using namespace std ; 

void removeConsecutiveDuplicates(char *input){
    if(input[0] == '\0') return ;
    if(input[0] == input[1]){
        for(int i = 0 ; i <= strlen(input) ; ++i){
            input[i] = input[i+1] ; 
        }
        return removeConsecutiveDuplicates(input) ; 
    }
    return removeConsecutiveDuplicates(input+1);
}

int main(){
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
    return 0 ; 
}