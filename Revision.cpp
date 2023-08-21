#include <bits/stdc++.h>

using namespace std ;

int main() {
    priority_queue<int , vector<int> , less<int>> pq;
    pq.push(32) ; 
    pq.push(280) ; 
    pq.push(10) ; 


    while (!pq.empty()) { 
        cout << pq.top() << endl ; 
        pq.pop() ;
    } 

    return 0 ; 

}