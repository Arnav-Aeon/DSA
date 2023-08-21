#include <iostream>
#include <queue>
#include <vector>

template <typename T>
class Node {
   public:
    T data;
    Node<T> *next;
    Node(T data) {
        this->data = data;
        this->next = NULL;
    }
};

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;

vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    if(root == NULL){
        return ; 
    }
    queue<BinaryTreeNode<int>*> pendingNodes ; 
    pendingNodes.push(root) ; 
    int temp = 1 ;
    Node<int>* prev = NULL ; 
    vector<Node<int>*> ans; 
    
    while(!pendingNodes.empty()){
        int temp2 = 0 ;
        Node<int>* head ; 
        while(temp--){
            BinaryTreeNode<int>* front = pendingNodes.front() ; 
            pendingNodes.pop() ;
            Node<int>* newNode = new Node(front -> data) ;
            if(front -> left != NULL){
                temp2++ ;
                pendingNodes.push(front -> left) ; 
            }
            if(front -> right != NULL){
                temp2++ ; 
                pendingNodes.push(front -> right) ; 
            }
            if(prev != NULL) prev -> next = newNode;
            else head = newNode ; 
            prev = newNode ; 
        }
        ans.push_back(head) ; 
        prev = NULL ; 
        temp = temp2 ;
    }
    return ans ;
}

BinaryTreeNode<int> *takeInput() {
    int rootData;
    
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        
        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }
        
        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

void print(Node<int> *head) {
    Node<int> *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    BinaryTreeNode<int> *root = takeInput();
    vector<Node<int> *> ans = constructLinkedListForEachLevel(root);

    for (int i = 0; i < ans.size(); i++) {
        print(ans[i]);
    }
}