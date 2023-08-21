//bubble sort iterative
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

Node *bubbleSort(Node *head){

    if(head == NULL || head -> next == NULL) return head ;
    Node *temp = head ; 
    Node *next = head -> next ; 
    int length = 0; 
    while(temp != NULL){
        temp = temp -> next ;
        length++ ;  
    }
    temp = head ; 

    for(int i = 0 ; i < length ; ++i){
        while(next != NULL){ 
            
            if(temp -> data > next -> data){
                
                int t = temp -> data ; 
                temp -> data = next -> data ;
                next -> data = t ; 
                
            }

            temp = next ; 
            next = temp -> next ;
        }
        temp = head ; 
        next = head -> next ; 
    }

    return head ; 
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
	Node *head = takeinput();
	head = bubbleSort(head);
	print(head);
}