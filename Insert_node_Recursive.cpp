#include <algorithm>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void print(int a[] , int n){
    for(int i = 0 ; i < n ; ++i){
        cout << a[i] << " " ; 
    }
    cout << endl ;
}

void insertNumberAt(int a[], int j , int i) {
    if(i <= j){
        return ;
    }
    a[i] = a[i-1] ;
    insertNumberAt(a , j , i-1) ; 
}

void insertionSort(int a[], int n) {
	for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < i ; ++j){
            int temp = a[i] ; 
            if(a[j] > a[i]){
                insertNumberAt(a , j , i) ;
                a[j] = temp ;
                break ; 
            }
        }
    }
}

class Runner {
    vector<int> v;

public:
    void takeInput() {
        int n;
        cin >> n;
        v.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
    }

    void execute() {
        int n = (int)v.size();
        int* a = new int[n];
        for (int i = 0; i < n; i++)
            a[i] = v[i];
        insertionSort(a, n);
        free(a);
    }

    void executeAndPrintOutput() {
        int n = (int)v.size();
        int* a = new int[n];
        for (int i = 0; i < n; i++)
            a[i] = v[i];
        insertionSort(a, n);
        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << '\n';
        free(a);
    }
};

int main() {
    // freopen("./Testcases/large/in/input.txt", "r", stdin);
    // freopen("./Testcases/large/out/output.txt", "w", stdout);
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();
    return 0;
}