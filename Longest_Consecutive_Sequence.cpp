#include <bits/stdc++.h>
#include <vector>
using namespace std;

#include <unordered_map>

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    unordered_map<int , int> map ; 
    vector<int> output ; 

    for (int i = 0 ; i < n ; ++i) {
        if (map.count(arr[i]) == 0) {
            map[arr[i]] = 1 ; 
        }
    }

    for (int i = 0 ; i < n ; ++i) {
        if (map.count(arr[i]) == 0) {
            map[arr[i]] = 1 ;
        }
        else {
            map[arr[i]] = 0 ; 
        }
    }

    return output ; 
}

int main() {
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    vector<int> ans = longestConsecutiveIncreasingSequence(arr, size);

    for (auto i = ans.begin(); i != ans.end(); ++i)
        cout << *i << " ";

    delete[] arr;
}
