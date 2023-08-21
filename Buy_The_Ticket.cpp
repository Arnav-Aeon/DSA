#include <iostream>
#include <vector>
using namespace std;

#include <queue>
int buyTicket(int *arr, int n, int k) { 
    priority_queue<int> pq ;
    queue<pair<int , bool>> pi ; 
    for (int i = 0 ; i < n ; ++i) {
        pq.push(arr[i]) ; 
        if ( i == k ) {
            pi.push({arr[i] , true}) ; 
        }
        else pi.push({arr[i] , false}) ; 
    }

    int time = 1 ; 
    while (!(pi.front()).second || (pi.front()).first < pq.top()) {
        if ((pi.front()).first == pq.top()) {
            pi.pop() ;
            pq.pop() ;
            time++ ; 
        }

        else {
            pi.push(pi.front()) ; 
            pi.pop() ;
        }
    }
    return time ; 
    
}

int main() {
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << buyTicket(arr, n, k);

    delete[] arr;
}