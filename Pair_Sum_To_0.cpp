#include <iostream>
using namespace std;

#include <unordered_map>
#include <vector>
int pairSum(int *arr, int n) {
    unordered_map<int , int> map ; 
    for (int i = 0 ; i < n ; ++i) {
        map[arr[i]]++ ; 
    }

    int ans = 0 ; 

    for (int i = 0 ; i < n ; ++i) {
        if (arr[i] == 0) {
            if(map[arr[i]] > 1) {
                map[arr[i]]-- ; 
                ans += map[arr[i]] ; 
            }
        }
        else if (arr[i] > 0) {
            if(map[-arr[i]] > 0) {
                ans += map[-arr[i]] ; 
            }
        }
    }

    return ans ;    
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}