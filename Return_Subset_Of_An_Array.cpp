#include <bits/stdc++.h>
using namespace std ; 

int subset(int input[] , int n , int output[][20]){
    if(n == 0){
        output[0][0] = 0 ;
        return 1 ;
    }
    int size = subset(input , n-1 , output) ;
    for(int i = 0; i < size ; ++i){
        
        output[size + i][0] = output[i][0] + 1 ;
        for(int j = 1 ; j <= output[i][0] ; j++){
            output[size+i][j] = output[i][j] ; 
        }
        output[size + i][output[size+i][0]] = input[n-1];
        
    }

    return size*2 ; 

}

int main(){
    int length ; 
    cin >> length ; 
    int* input = new int[length] ;
    for(int i = 0 ; i < length ; ++i){
        cin >> input[i] ; 
    }
    int output[3500][20] ; 
    int size = subset(input , length , output) ;
    for( int i = 0; i < size; i++) { 
	    for( int j = 1; j <= output[i][0]; j++) { 
		    cout << output[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0 ; 
}