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
        Node *odd ;
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

Pair evenOdd(Node *head){
    if(head== NULL){
        Pair newP ;
        newP.head = NULL ;
        newP.odd = NULL ; 
        return newP;
    }

    Pair newP = evenOdd(head -> next) ; 

    if(head -> data % 2 != 0){
        head -> next = newP.head ;
        newP.head = head ; 
        if(newP.odd == NULL) newP.odd = head ;
        return newP ;
    }

    else{
        if(newP.odd == NULL){
            head -> next = newP.head ; 
            newP.head = head ; 
            return newP ;
        }
        head -> next = newP.odd -> next ;
        newP.odd -> next = head ; 
        return newP ;
    }
}

Node *evenAfterOdd(Node *head){
    Pair P = evenOdd(head) ; 
    return P.head ; 
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
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}