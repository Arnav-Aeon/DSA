#include <iostream>
using namespace std;

bool isMaxHeap(int arr[], int n) {
    int parentIndex = 0 ; 
    int leftChild = 2*parentIndex + 1; 
    int rightChild = 2*parentIndex + 2 ;

    while (leftChild < n) {
        if (arr[parentIndex] < arr[leftChild]) {
            return false ; 
        }

        else if (rightChild < n && arr[parentIndex] < arr[leftChild]) {
            return false ; 
        }

        parentIndex++ ; 
        leftChild = 2*parentIndex + 1 ; 
        rightChild = 2*parentIndex + 2 ; 
    }

    return true ; 
}

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << (isMaxHeap(arr, n) ? "true\n" : "false\n");

    delete[] arr;
}