#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

class Pair{
    public:
    Node *head ; 
    Node *tail ; 
};

// Pair reverseLL(Node *head){
//     if(head == NULL || head -> next == NULL){
//         Pair P ; 
//         P.head = head ; 
//         P.tail = head ; 
//         return P ; 
//     }

//     Pair smallAns = reverseLL(head -> next) ;
//     smallAns.tail -> next = head ; 
//     smallAns.tail = head ; 
//     smallAns.tail -> next = NULL ;
//     return smallAns ; 

// }

using namespace std;


void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

Node *reverseLinkedListRec(Node *head){
    if(head == NULL || head -> next == NULL){
        return head ;
    } 

    Node* newHead = reverseLinkedListRec(head -> next) ; 
    Node* tail = head -> next ; 
    tail -> next = head ; 
    head -> next = NULL ; 

    return newHead ; 
}

Node *reverseLinkedList(Node *head){
    if(head == NULL || head -> next == NULL) return head ;
    Node *prev = NULL ; 
    Node *curr = head ; 
    Node *next = curr -> next ;

    while(next != NULL){
        next = curr -> next ;
        curr -> next = prev ; 
        prev = curr ; 
        curr = next ; 
    }

    return prev ; 
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	} 
    
	return head;
}


int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		Node *head = takeinput();

		head = reverseLinkedList(head);
		print(head);
	}

	return 0;
}