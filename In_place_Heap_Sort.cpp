#include <iostream>
#include <algorithm>
using namespace std;

void print(int arr[] , int n) {
    for (int i = 0 ; i < n ; ++i){
        cout << arr[i] << " " ;
    }
    cout << endl ; 
}

void heapSort(int arr[], int n) {
    //heap memory
    for (int i = 1 ; i < n ; ++i){
        int childIndex = i ;
        int parentIndex = (i-1)/2 ; 

        while (childIndex > 0 && arr[parentIndex] > arr[childIndex]) {
            swap(arr[parentIndex] , arr[childIndex]) ;
            childIndex = parentIndex ; 
            parentIndex = (childIndex - 1)/2 ; 

        }
    } 

    //remove part
    for (int i = 0 ; i < n ; ++i){ 
        swap(arr[n - i - 1] , arr[0]) ;
        int parentIndex = 0 ;
        int leftChild = 2 * parentIndex + 1 ;
        int rightChild = 2 * parentIndex + 2 ; 

        while (leftChild < n - i - 1  && (arr[parentIndex] >  arr[leftChild] || ((rightChild < n - i - 1) && arr[parentIndex] > arr[rightChild]))) {
            if (!(rightChild < n - i - 1)  || arr[leftChild] < arr[rightChild]) {
                swap(arr[leftChild] , arr[parentIndex]) ;
                parentIndex = leftChild ; 
                leftChild = parentIndex*2 + 1 ;
                rightChild = parentIndex*2 + 2 ;
            }

            else {
                swap(arr[rightChild] , arr[parentIndex]) ;
                parentIndex = rightChild ; 
                leftChild = parentIndex*2 + 1 ;
                rightChild = parentIndex*2 + 2 ;
            }
        } 
    }
     
}



int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    } 

    heapSort(input, size);

    for (int i = 0; i < size; i++) {
        cout << input[i] << " ";
    } 

    delete[] input;
}