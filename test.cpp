Node *deleteNode(Node *head , int pos){
    if(head == NULL) return NULL ;
    Node *temp = head ; 
    if(pos == 0){
        head = head -> next ; 
        delete temp ; 
        return head ; 
    }
    while(--pos){   
        temp = temp -> next;
        if(temp == NULL || temp -> next == NULL) return head ; 

    }
    Node *a = temp -> next ; 
    temp -> next = a -> next ; 
    delete a ; 
    return head ; 
}