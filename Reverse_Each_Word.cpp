#include <bits/stdc++.h>
#include <cstring>
using namespace std;


void reverse(char input[] ){
    int size = strlen(input); 
    char temp ; 
    for(int i = 0 ; i < size/2 ; ++i){
        temp = input[i] ; 
        input[i] = input[size - 1 - i] ; 
        input[size - 1 - i] = temp ; 
    }
}


void reverseEachWord(char input[]) {
    int size = 1e6 ;
    char word[size] ; 
    int i = 0 , j = 0 , k = 0; 

    while(input[i] != '\0'){
        word[j] = input[i] ; 



        if(input[i+1] == ' ' || input[i+1] == '\0'){
            while(j+1){
                input[k] = word[j] ; 
                k++ ; 
                j-- ;
            }
            word[0] = '\0' ; 
            k++ ; 
            i++ ; 
        }
        i++ ;
        j++ ;
    }
}
int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}