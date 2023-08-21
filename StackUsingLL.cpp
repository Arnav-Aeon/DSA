#include <bits/stdc++.h>
using namespace std ; 
class Node{
    public :
        int data ; 
        Node *next ; 

        Node(int data){
            this -> data = data ; 
            this -> next = NULL ;
        }
};

class Stack{
    Node *head ; 
    int totsize ; 
    public:
        Stack(){
            this -> head = NULL ; 
            totsize = 0 ; 
        }

        void push(int data){
            Node *temp = new Node(data) ; 
            temp -> next = this -> head ; 
            this -> head = temp ; 
            this -> totsize++ ; 
        }

        int pop(){
            if(totsize == 0) return -1 ; 
            Node *temp = head ; 
            head = head -> next ; 
            int del = temp -> data ;
            delete temp ;
            totsize-- ; 
            return del ; 
        }

        bool isEmpty(){
            return !totsize ; 
        }

        int top(){
            if(totsize == 0) return -1 ;
            return (head -> data) ;
        }

        int getSize(){
            return totsize ; 
        }


};

int main() {
    Stack st;

    int q;
    cin >> q;

    while (q--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                st.push(input);
                break;
            case 2:
                cout << st.pop() << "\n";
                break;
            case 3:
                cout << st.top() << "\n";
                break;
            case 4:
                cout << st.getSize() << "\n";
                break;
            default:
                cout << ((st.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }
}