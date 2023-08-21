#include <bits/stdc++.h>

using namespace std ; 

void display(string output[] , int size){
    for(int i = 0 ; i < size ; ++i){
        cout << output[i] << " " ;
    }
    cout << endl ;
}

int getCodes(string input, string output[10000]) {
    if(input.empty()){
        output[0] =  "" ; 
        return 1 ;
    }
    string smallstring = input.substr(1) ; 
    int size = getCodes(smallstring , output) ;
    int it = int(input[0]) - 48 ;
    int itt = 0 ; 

    for(int i = 0 ; i < size ; ++i){
        int temp  = int(output[i][0]) - 96 ; 
        if(temp > 10 || it*10 + temp > 26 || temp < 0) continue ;
        int n = it*10 + temp ; 
        output[size + i] = char(n+96) + output[i].substr(1) ; 
        itt++ ; 
    }

    

    for(int i = 0 ; i < size ; ++i){
        output[i] = char(it+96) + output[i] ; 
    }

    return size + itt ;
}   




int main() {
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}