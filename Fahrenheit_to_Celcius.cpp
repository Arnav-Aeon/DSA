#include<bits/stdc++.h>

using namespace std ; 

void printTable(int start , int end , int step){
    while (start <= end){
        cout << start << '\t' <<  (5)*(start - 32)/9 << endl  ;
        start += step ; 
    }
}

int main() {
    int s , e , w ; 
    cin >> s >> e >> w ; 
    printTable(s , e , w) ;

    return 0 ; 
}