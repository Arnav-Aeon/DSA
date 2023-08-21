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

Node *reverse(Node *head){
    if(head == NULL || head -> next == NULL){
        return head ; 
    }
    Node* newhead =  reverse(head -> next) ;
    Node* last = head -> next ; 
    head -> next = NULL ; 
    last -> next = head ;
    return newhead ; 
}

Node *kReverse(Node *head, int k){
    if(head == NULL || head -> next == NULL || k == 0 ){
        return head ; 
    }
    int temp = k ;
    Node *newhead = head ; 
    while(--temp && head -> next != NULL){
        head = head -> next ;
    }

    Node *smallAns = kReverse(head -> next , k) ; 
    head -> next = NULL ;
    Node *last = newhead ; 
    newhead = reverse(newhead) ; 
    last -> next = smallAns ; 
    
    return newhead ; 
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

	while (t--)
	{
		Node *head = takeinput();
		int k;
		cin >> k;
		head = kReverse(head , k);
		print(head);
	}
	
	return 0;
}