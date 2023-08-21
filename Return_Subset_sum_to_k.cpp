#include <bits/stdc++.h>
using namespace std ;

int subsetSumToK(int input[], int n, int output[][50], int k) {
        if(k == 0){
            output[0][0] = 0 ;
            return 1; 
        }
        else if(n == 0){
            return 0 ; 
        }

        int smallAns1 = subsetSumToK(input + 1 , n - 1 , output , k) ; 
 
        int smallAns2 = subsetSumToK(input + 1 , n - 1 , output , k - input[0]) ; 
        for(int i = smallAns1 ; i < smallAns2 ; ++i){
            for(int j = 1 ; j < output[i][0] ; ++i){
                output[i][j + 1] = output[i][j] ; 
            }
            output[i][1] = input[0] ;  
        }
        
        return smallAns2 ; 
}



int main(){
    int input[20],length, output[10000][50], k;
    cin >> length;
    for(int i=0; i < length; i++)
        cin >> input[i];

    cin >> k;
  
    int size = subsetSumToK(input, length, output, k);

    for( int i = 0; i < size; i++) { 
	    for( int j = 1; j <= output[i][0]; j++) { 
		    cout << output[i][j] << " ";
        }
        cout << endl;
    }
    return 0 ; 
}