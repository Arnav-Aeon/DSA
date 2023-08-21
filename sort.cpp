#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n;
    int a[n];
    // to sort an array we pass in the pointer of the first and the pointer of the last element + 1 

    sort(a , a+n);

    // for vector and string we give the iterators that is : 

    vector<int> v; 
    sort(v.begin() , v.end());

    string s;
    sort(s.being() , s.end());

    return 0;
}