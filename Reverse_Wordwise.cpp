#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int len(char input[]){
    int count = 0 ; 
    while(input[count] != '\0'){
        count++ ;
    }
    return ++count ;
}

void add_in_front(char input[] , char c , int k){
    int size = len(input) ; 
    for(int i = size-1 ; i >= k ; --i){
        input[i+1] = input[i] ; 
    }
    input[k] = c ;
    input[size] = '\0' ;  
}

void reverseStringWordWise(char input[]) {
    int size = len(input) ;
    char new_input[1000] ; 
    int k = 0 ; 
    for(int i = len(input)-1 ; i >= 0 ; --i){
        if(input[i] != ' '){
            add_in_front(new_input , input[i] , k);
        }
        else{
            
            k = len(new_input) ;
            new_input[k-1] = ' ' ; 
            new_input[k] = '\0' ; 
        }
    }
    for(int i = 0 ; i < size ; ++i){
        input[i] = new_input[i] ;
    }
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
