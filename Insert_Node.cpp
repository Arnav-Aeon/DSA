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

void insertNumberAt(int a[], int i) {
	
}

void insertionSort(int a[], int n) {
	
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
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();
    return 0;
}