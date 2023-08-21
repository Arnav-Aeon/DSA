#include <bits/stdc++.h>
using namespace std ;

void display(int input[] , int size){
    for(int i = 0 ; i < size ; ++i){
        cout << input[i] << " " ; 
    }
}


int partition(int input[] , int start , int end){
    int count = 0 ;
    for(int i = start ; i < end+1 ; ++i){
        if(input[i] < input[start]){
            count++;
        }
    }

    int pi = start + count ;
    swap(input[start] , input[pi]);

    int temp ;  

    for(int i = start ; i < pi ; ++i){
        if(input[i] >= input[pi]){
            for(int j = end ; j > pi ; j--){
                if(input[j] < input[pi]){
                    temp = j ; 
                }
            }
            swap(input[i] , input[temp]);
        }
    }

    return pi ; 
}

void quickSort(int input[] , int start , int end){
	if(start >= end){
		return ;
	}
	int pi = partition(input , start , end); 
    quickSort(input , start , pi-1);
    quickSort(input , pi+1 , end);
}

void quickSort(int input[], int size) {
	quickSort(input , 0 , size - 1);
}

int main(){
    int n ; 
    cin >> n ;
    int *input = new int[n];
    for(int i = 0 ; i < n ; ++i){
        cin >> input[i];
    }
    quickSort(input , n);
    
    display(input , n) ; 
    delete[] input ;
    return 0 ; 
}