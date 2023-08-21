#include <iostream>
using namespace std;

#include <vector>
#include <unordered_map>
int highestFrequency(int arr[], int n)
{
    unordered_map<int, int> map;
    for (int i = 0; i < n; ++i) {
        map[arr[i]]++;
    }
    int max_count = 0, ans = -1;

    for (int i = 0 ; i < n ; ++i) {
        if (map[arr[i]] > max_count){
            ans = arr[i] ;
            max_count = map[arr[i]] ;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
    return 0;
}