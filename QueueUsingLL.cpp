template <typename T>

class Node{
    public :
    Node<T> *next ; 
    T data ;

    Node(T data){
        next = NULL ;
        this -> data = data ;
    }
};


template <typename T>
class Queue{
    Node<T> *head ;
    Node<T> *last ;
    int size ;
    public:
    Queue(){
        head = NULL ; 
        last = NULL ;
        size = 0 ;
    }

    void enqueue(T data){
        if(size == 0){
			Node<T> *newNode = new Node(data) ; 
			head = newNode ; 
			last = newNode ;
			size++ ; 
			return ;
		}
        Node<T> *newNode = new Node(data) ; 
        last -> next = newNode ; 
        newNode -> next = NULL ;
        last = newNode ;
        size++ ; 
    }

    bool isEmpty(){
        return head == NULL ; 
    }

    int getSize(){
        return size ; 
    }

    T front(){
        return head -> data; 
    }

    T dequeue(){
        if(size == 0){
            return -1 ; 
        }
        Node<T> *newNode = head ; 
        T del = newNode -> data ; 
        head = head -> next ; 
        size-- ; 
        delete newNode ; 
        return del ; 
    }

};