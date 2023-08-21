#include <bits/stdc++.h>

using namespace std ;

void printSubsetSumToK(int input[], int size, int k) {
    for(int i = size - 1 ; i >= 0 ; --i){
        printSubsetSumToK(input , size - 1 , k - input[i]) ; 
        cout << input[i] << " " ; 
    }
}


int main(){
    int length ; 
    cin >> length ; 

    int *input = new int[length] ; 
    for(int i = 0 ; i < length ; ++i){
        cin >> input[i] ;
    }
    int sum ;
    cin >> sum ;

    printSubsetSumToK(input , length , sum) ; 

    delete[] input ; 
    return 0 ;      

}