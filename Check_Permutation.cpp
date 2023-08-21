#include <iostream>
#include <cstring>
using namespace std;

    bool isPermutation(char input1[], char input2[]) {
        int arr[256] ;
        for(int i = 0 ; i < 256 ; ++i){
            arr[i] = 0 ; 
        }

        int i = 0 ;  
        while(input1[i] != '\0'){
            ++arr[int(input1[i])]; 
            // cout << int(input1[i]) << endl ; 
            ++i ; 
        }

        // cout << endl ; 
        int j = 0 ; 
        while(input2[j] != '\0'){
            --arr[int(input2[j])] ;
            // cout << int(input2[j])
            ++j ;
        }

        bool t = true ; 

        for(int i = 0 ; i < 256 ; ++i){
            if(arr[i] != 0){
                t = false ; 
            }
        }

        return t ; 
    }

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}