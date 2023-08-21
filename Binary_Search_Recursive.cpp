#include <bits/stdc++.h>
using namespace std ; 

int binarysearch(int input[] , int start , int end , int element){
    if(start > end){
        return -1 ; 
    }

    int mid = (end + start)/2 ;
    if(input[mid] == element){
        return mid ; 
    }
    else if(input[mid] < element){
        return binarysearch(input , mid+1 , end , element) ; 
    }
    else{
        return binarysearch(input , start , mid-1 , element);
    }

}

int binarySearch(int input[] , int size , int element){
    return binarysearch(input , 0 , size - 1 , element);
}

int main(){
    int length ;
    cin >> length ; 
    int* input = new int[length] ;
    for(int i = 0 ; i < length ; ++i){
        cin >> input[i] ; 
    }
    int element , ans ; 
    cin >> element ; 
    ans = binarySearch(input , length , element) ; 
    cout << ans ; 
    delete[] input ; 

    return 0 ; 
}