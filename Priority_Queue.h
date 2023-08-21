#include <bits/stdc++.h>
using namespace std ; 

class PriorityQueue {
    vector<int> pq ;

    public :

    PriorityQueue() {

    } 

    bool isEmpty() {
        return pq.empty() ;
    }

    int getSize() {
        return pq.size() ; 
    }

    int getMin() {
        if (isEmpty()) {
            return 0 ; 
        }
        return pq[0] ; 
    }

    void insert(int data) {
        pq.push_back(data) ;
        int childIndex = pq.size() - 1 ;
        int parentIndex = (childIndex - 1)/2 ; 
        while (childIndex > 0 && pq[childIndex] < pq[parentIndex]) {
            swap(pq[childIndex] , pq[parentIndex]) ; 
            childIndex = (childIndex - 1)/2 ;
        }
    }

    void print() {
        int temp = 0 , n = 0;
        for (auto it = pq.begin() ; it != pq.end() ; ++it) {
            cout << *it << " " ;
            if (temp == n){
                cout << endl ;
                n += 2 ; 
                temp = 0 ;
            }
            temp++ ; 
        }
    }

    void


};