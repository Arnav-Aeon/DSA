#include <bits/stdc++.h>

using namespace std ; 


bool checkAB(char input[] , int start = 0){
    
    if(input[start] == 'a' && input[start + 1] == 'b' && input[start + 2] == 'b'){
        return (true && checkAB(input , start + 3)) ; 
    }
    else if(input[start] == 'a' && input[start + 1] == 'a'){
        return (true && checkAB(input , start + 1)) ; 
    }
    else if(input[start] == '\0'){
        return true ;
    }
    return false ; 


}

int main(){
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;

    return 0 ; 
}