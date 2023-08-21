#include <bits/stdc++.h>

using namespace std ;

void display(int input[] , int size){
    for(int i = 0 ; i < size ; ++i){
        cout << input[i] << ' ' ; 
    }
    cout << endl << endl;
}
void merge(int input[] , int start , int mid , int end){
    int *temp = new int[end - start] ; 
    int a = start , b = mid , i = 0 ;
    while(a != mid && b != end){
        if(input[a] <= input[b]){
            temp[i] = input[a] ;
            a++;
        }
        else if(input[a] > input[b]){
            temp[i] = input[b] ; 
            b++ ; 
        }
        i++ ;
    }
    if(a < mid ){
        for(; a < mid ; ++a , ++i){
            temp[i] = input[a];
        }
    }
    else if(b < end){
        for(; b < end ; ++b , ++i){
            temp[i] = input[b];
        }
    }
    for(int i = start , j = 0 ; i < end ; ++i , ++j){
        input[i] = temp[j] ; 
    } 
    delete[] temp ; 
}

void mergeSort(int input[] , int end , int start = 0){
    if(end - 1 <= start) return ; 
    int mid = (end+start-1)/2 ;  
    //cout << mid << endl ;
    mergeSort(input , mid+1 , start);
    mergeSort(input , end , mid+1) ;
    merge(input , start , mid+1 , end) ;
}

int main() {
    int length;
    cin >> length;
    int* input = new int[length];
    for(int i=0; i < length; i++)
        cin >> input[i];
    mergeSort(input, length);
    for(int i = 0; i < length; i++) {
        cout << input[i] << " ";
    }
    return 0 ; 
}