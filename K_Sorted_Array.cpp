#include <bits/stdc++.h>
#include <queue>
using namespace std ;

void ksortedArray(int arr[] , int n , int k) {
    priority_queue<int> pq ; 
    for (int i = 0 ; i < k ; ++i) {
        pq.push(arr[i]) ; 
    }

    int j = 0; 
    for (int i = k ; i < n ; ++i) {
        arr[j] = pq.top() ;
        pq.pop() ; 
        pq.push(arr[i]) ; 
        j++ ; 
    }

    while (!pq.empty()) {
        arr[j] = pq.top() ;
        pq.pop() ;
        j++ ;
    }
}

int main() {

    int n , k  ; cin >> n >> k; 
    int *input = new int[n] ; 
    for (int i = 0 ; i < n ; ++i) {
        cin >> input[i] ; 
    }
    ksortedArray(input , n , k) ; 
    for (int i = 0 ; i < n ; ++i) {
        cout << input[i] << " " ; 
    }
    delete[] input ;
    return 0 ; 
}
