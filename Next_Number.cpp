#include <iostream>
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

using namespace std;

Node* recNext(Node *head){
    if(head == NULL){
        return head ; 
    }
    else if(head -> next == NULL){
        head -> data++ ; 
        return head ; 
    }
    Node *smallAns = recNext(head -> next) ; 
    if(smallAns -> data >= 10){
        smallAns -> data -= 10 ;
        head -> data++ ; 
    }
    return head ; 
}


Node* NextLargeNumber(Node *head) {
    head = recNext(head) ; 
    if(head -> data >= 10){
        head -> data -= 10 ;
        Node *newNode = new Node(1) ; 
        newNode -> next = head ;
        head = newNode ; 
    }
    
    return head  ; 
}




Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {
    Node *head = takeinput();
    
    head = NextLargeNumber(head);
    print(head);
    return 0;
}



