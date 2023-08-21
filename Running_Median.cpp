#include <iostream>
using namespace std;

#include <queue>

void findMedian(int *arr, int n)
{
    
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    findMedian(arr,n);

    delete[] arr;
}
