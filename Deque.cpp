#include <bits/stdc++.h>
using namespace std ;

class Node{
    public:
    int data ; 
    Node* next ;
    Node* prev ; 

    Node(int data){
        this -> data = data ; 
        next = NULL ; 
        prev = NULL ;
    }
};


class Deque{
    Node* front ; 
    Node* rear ; 
    Node *seclast ; 
    int totsize ;
    int size ; 

    public:
    Deque(int size){
        totsize = size ;
        front = NULL ; 
        rear = NULL ;  
    }

    void insertFront(int data){
        if(size == totsize){
            cout << -1 << endl; 
            return ; 
        }
        Node* newNode = new Node(data) ; 
        if(size == 0){
            front = newNode ; 
            rear = front ;
            size++ ; 
            return ;

        }
        newNode -> next = front ; 
        front -> prev = newNode ; 
        front = newNode ; 
        size++ ; 
    }

    void insertRear(int data){
        if(size == totsize){
            cout << -1 << endl ;
            return ;
        }
        Node* newNode = new Node(data) ;
        if(size == 0){
            rear = newNode ; 
            front = rear ; 
            size++ ; 
            return ;
        }
        rear -> next = newNode ;
        newNode -> prev = rear ;
        rear = newNode ; 
        size++ ;
    }
    
    void deleteFront(){
        if(size == 0){
            cout << -1 << endl ;
            return  ;
        }
        Node *newNode = front ; 
        front = front -> next ; 
        delete newNode ; 
        if(size == 1){
            rear = NULL ;
        }
        size-- ; 
    }

    void deleteRear(){
        if(size == 0){
            cout << -1 << endl ; 
            return ;
        }
        Node *newNode = rear ; 
        rear = rear -> prev ; 
        if(size == 1){
            front = NULL ; 
        }
        delete newNode ; 
        size-- ; 
    }

    int getFront(){
        if(size == 0){
            return -1 ; 
        }
        return front -> data ;
    }

    int getRear(){
        if(size == 0) return -1 ;
        return rear -> data ;
    }

};

int main()
{
    Deque dq(10);
    int choice,input;
    while(true) {
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                dq.insertFront(input);
                break;
            case 2:
                cin >> input;
                dq.insertRear(input);
                break;
            case 3:
                dq.deleteFront();
                break;
            case 4:
                dq.deleteRear();
                break;
            case 5:
                cout << dq.getFront() << "\n";
                break;
            case 6:
                cout << dq.getRear() << "\n";
                break;
            default:
                return 0;
        }
    }
    
    return 0;
}
