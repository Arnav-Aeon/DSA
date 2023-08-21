#include <bits/stdc++.h>
using namespace std ; 
#include "Node.cpp"

Node* takeInput(){

    int data ; 
    cin >> data ; 
    Node *head = NULL ; 
    Node* last = NULL ;
    while(data != -1){
        Node *newNode = new Node(data) ;
        if(head == NULL){
            head = newNode ; 
        }
        else {
            last -> next = newNode ; 
        }
        cin >> data ;
        last = newNode ;
    }

    return head ; 
}

void insert(Node *head , int i , int data){
    Node *newNode = new Node(data) ; 
    while(--i){
        if(head == NULL) return ; 
        head = head->next ; 
    }
    Node *temp = head -> next ;
    head -> next = newNode ; 
    newNode -> next = temp ; 
    
}

int length(Node *head){
    int length = 0 ; 
    while(head != NULL){
        head = head -> next ; 
        length++ ; 
    }
    return length ; 
}

void print(Node *head){
    while(head != NULL){
        cout << head -> data << " " ; 
        head = head -> next ; 
    }
    cout << endl ; 
}

// Node *deleteNode(Node *head , int pos){
//     if(head == NULL) return NULL ;
//     Node *temp = head ; 
//     if(pos == 0){
//         head = head -> next ; 
//         delete temp ; 
//         return head ; 
//     }
//     while(--pos){   
//         temp = temp -> next;
//         if(temp == NULL || temp -> next == NULL) return head ; 

//     }
//     Node *a = temp -> next ; 
//     temp -> next = a -> next ; 
//     delete a ; 
//     return head ; 
// }

Node *deleteNode(Node *head , int i){
    if(head == NULL){
        return head  ;
    }

    if(i == 0){
        Node *temp = head ;
        head = head -> next ; 
        delete temp ; 
    }

    head -> next =  deleteNode(head -> next , i-1) ; 
    return head ; 
}

int findNode(Node *head , int n){
    int index = 0 ; 
    while(head != NULL){
        if(head -> data == n) break ; 
        head = head -> next ; 
        index++ ; 
    }
    if(head == NULL){
        return -1 ; 
    }
    return index ; 
}

Node *appendLastNToFirst(Node *head, int n){
    if(head == NULL || n == 0) return head ; 
    Node *last = head ;
    int size = 1 ; 
    while(last -> next != NULL){
        last = last -> next ; 
        size++; 
    }
    cout << last -> data << endl ;
    Node *temp = head ;
    n = size - n ; 
    while(n--){
        temp = temp -> next ; 
    }
    Node *newhead = temp -> next ;
    last -> next = head ; 
    temp -> next = NULL ; 

    return newhead ;
}

Node *removeDuplicates(Node *head){

    if(head == NULL){
        return NULL ; 
    }
    
    Node *newNode = removeDuplicates(head -> next) ;
    if(newNode != NULL && newNode -> data == head -> data){
        head -> next = newNode -> next ; 
        delete newNode ; 
    }
    return head ;

}

void printReverse(Node *head){
    if(head == NULL) return ; 
    printReverse(head -> next) ; 
    cout << head -> data << " " ; 
}

int data(Node *head , int i){
    while(i--){
        head = head -> next ; 
    }
    return head -> data ;
}

bool isPalindrome(Node *head){
    if(head == NULL ) return true ; 
    int size = 1 ; 
    Node *temp = head ; 
    while(temp -> next != NULL){
        temp = temp -> next ; 
        size ++ ; 
    }

    for(int i = 0 ; i < size/2 ; ++i){
        if(data(head , i) != data(head , size - i - 1)) return false ; 
    }

    return true ;
}

Node *midPoint(Node *head){
    if(head == NULL) return NULL ; 
    Node *slow = head ; 
    Node *fast = head -> next ;
    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next ; 
        fast = fast -> next -> next ; 
    }

    return slow ; 
}

int main(){

    // Statically
    Node n1(1) ; 
    Node* head = &n1 ; 
    Node n2(2) ;  
    Node n3(3) ;
    Node n4(2) ; 
    Node n5(1) ; 
    
    n1.next = &n2 ; 
    n2.next = &n3 ; 
    n3.next = &n4 ;
    n4.next = &n5 ; 

    print(head) ; 

    // cout << findNode(head , 10) << endl ; 
    // head = appendLastNToFirst(head , 3) ; 
    // print(head) ; 
    // printReverse(head) ; 
    cout << isPalindrome(head) << endl  ;
    Node *mid = midPoint(head)  ; 
    cout << mid -> data << endl ; 

    // Node* newhead = takeInput() ; 
    // print(newhead) ;
    // cout << length(newhead) << endl ;  
    // insert(head , 3 , 6) ; 
    // print(head) ; 

    // head = deleteNode(head , 0) ; 
    // print(head) ; 



    // // Statically 
    // Node n1(1) ;
    // Node *head = &n1 ; 
    // Node n2(2) ;
    // n1.next = &n2 ;

    // cout << head -> data ; 
    

    // // Dynamically
    // Node *n3 = new Node(10) ; 
    // Node *head = n3 ;
    // Node *n4 = new Node(20) ;  
    // n3 -> next = n4 ; 



    
}

