#include <iostream>
#include <climits>
using namespace std;

#include <vector>

class PriorityQueue {
    vector<int> pq;

   public:
    bool isEmpty() { 
        return pq.size() == 0; 
    }

    int getSize() { 
        return pq.size(); 
    }

    int getMin() {
        if (isEmpty()) {
            return 0;
        }

        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }

            childIndex = parentIndex;
        }
    }

    int removeMin() {
        if (isEmpty()) {
            return -1 ;  
        }
        int temp = pq[0] ; 
        swap(pq[0] , pq[pq.size() - 1]) ; 
        pq.pop_back() ;   
        int parentIndex = 0 ; 
        int leftChild = parentIndex*2 + 1 ;
        int rightChild = parentIndex*2 + 2 ;

        while (leftChild <= pq.size() - 1 && (pq[parentIndex] > pq[leftChild] || pq[parentIndex] > pq[rightChild])) {
            if (rightChild >= pq.size() - 1 || pq[leftChild] < pq[rightChild]) {
                swap(pq[leftChild] , pq[parentIndex]) ;
                parentIndex = leftChild ; 
                leftChild = parentIndex*2 + 1 ;
                rightChild = parentIndex*2 + 2 ;
            }

            else {
                swap(pq[rightChild] , pq[parentIndex]) ;
                parentIndex = rightChild ; 
                leftChild = parentIndex*2 + 1 ;
                rightChild = parentIndex*2 + 2 ;
            }
        }
        return temp ; 
    }
};

int main() {
    PriorityQueue pq;

    int choice;
    cin >> choice;

    while (choice != -1) {
        switch (choice) {
            case 1:  // insert
                int element;
                cin >> element;
                pq.insert(element);
                break;
            case 2:  // getMin
                cout << pq.getMin() << "\n";
                break;
            case 3:  // removeMax
                cout << pq.removeMin() << "\n";
                break;
            case 4:  // size
                cout << pq.getSize() << "\n";
                break;
            case 5:  // isEmpty
                cout << (pq.isEmpty() ? "true\n" : "false\n");
            default:
                return 0;
        }
        
        cin >> choice;
    }
}