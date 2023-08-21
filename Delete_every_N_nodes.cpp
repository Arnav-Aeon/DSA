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

Node *skipMdeleteN(Node *head, int M, int N){
    if(head == NULL || N == 0){
		return head ; 
	}
	if(M == 0){
		return NULL ; 
	}
	Node *newhead = head ; 
	int m = M , n = N ; 
	while(--m && head != NULL && head -> next != NULL){
		head = head -> next ;
	}
	Node *last = head ; 
	head = head -> next ; 
	Node *next = head; 
	while(n-- && head != NULL){
		next = next -> next ; 
		delete head ;
		head = next ; 
	}
	Node *smallAns = skipMdeleteN(head , M , N) ; 
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

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int m, n;
		cin >> m >> n;
		head = skipMdeleteN(head, m, n);
		print(head);
	}
	return 0;
}