#include <iostream>
using namespace std;
#include <vector>
class PriorityQueue
{
    vector<int> pq;

public:
    PriorityQueue()
    {
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element)
    {
        pq.push_back(element);
        int childIndex = pq.size() - 1;
        int parentIndex = (childIndex - 1) / 2;

        while (childIndex > 0 && pq[childIndex] > pq[parentIndex])
        {
            swap(pq[parentIndex], pq[childIndex]);
            childIndex = parentIndex;
            parentIndex = (childIndex - 1) / 2;
        }

    }


    int getMax()
    {
        if (isEmpty()) return 0 ;
        return pq[0];
    }

    int removeMax()
    {
        if (isEmpty()) return 0 ; 
        int temp = pq[0];
        swap(pq[0], pq[pq.size() - 1]);
        pq.pop_back();

        int parentIndex = 0;
        int leftChild = 2 * parentIndex + 1;
        int rightChild = 2 * parentIndex + 2;

        if (leftChild < pq.size() && (pq[leftChild] > pq[parentIndex] || pq[rightChild] > pq[parentIndex]))
        {
            if (rightChild >= pq.size() || pq[leftChild] > pq[rightChild])
            {
                swap(pq[parentIndex], pq[leftChild]);
                parentIndex = leftChild;
                leftChild = 2 * parentIndex + 1;
                rightChild = 2 * parentIndex + 2;
            }

            else
            {
                swap(pq[parentIndex], pq[rightChild]);
                parentIndex = rightChild;
                leftChild = 2 * parentIndex + 1;
                rightChild = 2 * parentIndex + 2;
            }
        }
        return temp ; 
    }

    int getSize()
    {
        return pq.size();
    }

    bool isEmpty()
    {
        return pq.empty();
    }
};

int main()
{
    PriorityQueue pq;
    int choice;
    cin >> choice;

    while (choice != -1)
    {
        switch (choice)
        {
        case 1: // insert
            int element;
            cin >> element;
            pq.insert(element);
            break;
        case 2: // getMax
            cout << pq.getMax() << "\n";
            break;
        case 3: // removeMax
            cout << pq.removeMax() << "\n";
            break;
        case 4: // size
            cout << pq.getSize() << "\n";
            break;
        case 5: // isEmpty
            cout << (pq.isEmpty() ? "true\n" : "false\n");
        default:
            return 0;
        }

        cin >> choice;
    }
}