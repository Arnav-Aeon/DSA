#include <bits/stdc++.h>

using namespace std ; 

void display(string output[] , int size){
    for(int i = 0 ; i < size ; ++i){
        cout << output[i] << " / " ;
    }
    cout << endl ; 
}

int returnPermutations(string input, string output[]){
    if(input.empty()){
        output[0] = "" ;
        return 1 ; 
    }

    int size = returnPermutations(input.substr(1) , output) ;  
    int itt = 0 ; 
    for(int i = 0 ; i < size ; ++i){
        for(int j = 1 ; j <= output[i].size() ; ++j){
            output[size + itt] = output[i].substr(0 , j) + input[0] + output[i].substr(j) ; 
            ++itt ; 
        }
        output[i] = input[0] + output[i] ; 
    } 
    
    return size + itt;
}


int main() {
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0 ;
}