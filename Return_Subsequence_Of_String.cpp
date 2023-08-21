#include <bits/stdc++.h>

using namespace std ;

int subseq(string input , string *output){
    if(input.empty()){
        output[0] = "" ; 
        return 1; 
    }

    string smallString = input.substr(1) ; 
    int smallStringSize = subseq(smallString , output) ;
    for(int i = 0 ; i < smallStringSize ; ++i){
        output[i+smallStringSize] = input[0] + output[i] ;
    }

    return 2*smallStringSize ;

}

int main(){
    string s ; 
    cin >> s; 

    string* output = new string[1000]; 
    int count = subseq(s , output) ; 
    for(int i = 0 ; i < count ; ++i){
        cout << output[i] << endl ; 
    }

    delete[] output ; 
    return 0 ; 


}