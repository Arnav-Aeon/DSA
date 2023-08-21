#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>

using namespace std ; 

vector<int> removeDuplicates(int *arr , int size) {
    vector<int> output ; 
    unordered_map<int , bool> map ; 

    for (int i = 0 ; i < size ; ++i) {
        if (map.count(arr[i]) == 0) {
            map[arr[i]] = true ; 
            output.push_back(arr[i]) ; 
        }
    }

    return output ; 
}

int main() {

    int n ; cin >> n ; 
    int *input = new int[n] ; 

    for (int i = 0 ; i < n ; ++i) {
        cin >> input[i] ; 
    }

    vector<int> output = removeDuplicates(input , n) ; 
    for (auto it = output.begin() ; it != output.end() ; ++it) { 
        cout << *it << " " ;
    }
    delete input ;  
    return 0 ;  
}