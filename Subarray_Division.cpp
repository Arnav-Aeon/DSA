#include<bits/stdc++.h>

using namespace std;

int sum_no(vector<int>a , int begin , int num ){
    int end = begin + num ;
    int sum = 0;
    for(int i = begin ; i < end ; ++i ){
        sum += a[i];
    }
    return sum;
}

int main() {
    int n ;
    cin >> n ; 
    vector<int>  v;
    int temp;
    for(int i = 0 ; i < n ; ++i){
        cin >> temp;
        v.push_back(temp) ; 
    }
    int d , m , total = 0 ;
    cin >> d ;
    cin >> m ;
    for(int i = 0 ; i < n ; ++i){
        if(sum_no(v , i , m) == d){
            total++;
        }
    }
    cout << total ;
}