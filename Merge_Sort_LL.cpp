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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2){

    if(head1 == NULL){
        return head2 ; 
    }
    else if(head2 == NULL){
        return head1 ;
    }


    if(head1 -> data < head2 -> data){
        head1 -> next = mergeTwoSortedLinkedLists(head1 -> next , head2) ; 
        return head1 ; 
    }
    else{
        head2 -> next = mergeTwoSortedLinkedLists(head1 , head2 -> next) ; 
        return head2 ; 
    }
}


Node *mergeSort(Node *head){
    if(head == NULL || head -> next == NULL){
        return head ; 
    }
    Node *mid = midPoint(head) ;  
    Node *mid1 = mid -> next ;  
    mid -> next = NULL ; 
    Node *head1 = mergeSort(head) ; 
    Node *head2 = mergeSort(mid1) ; 
    return mergeTwoSortedLinkedLists(head1 , head2) ; 
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
		head = mergeSort(head);
		print(head);
	}

	return 0;
}