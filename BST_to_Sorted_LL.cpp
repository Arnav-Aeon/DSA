#include <iostream>
#include <queue>

template <typename T>
class Node {
   public:
    T data;
    Node<T>* next;
    Node(T data) {
        this->data = data;
        this->next = NULL;
    }
};

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;

pair<Node<int>* , Node<int>*> LLfromBST(BinaryTreeNode<int>* root){
    if(root == NULL){
        pair<Node<int>* , Node<int>*> p ; 
        p.first = NULL ; 
        p.second = NULL ; 
        return p ; 
    }
    Node<int>* newNode = new Node(root -> data) ; 
    Node<int>* head = newNode ;
    Node<int>* tail = newNode ; 
    if(root -> left != NULL){
        pair<Node<int>* , Node<int>*> leftChild = LLfromBST(root -> left) ; 
        leftChild.second -> next = newNode ;
        head = leftChild.first ;
    }
    if(root -> right != NULL){
        pair<Node<int>* , Node<int>*> rightChild = LLfromBST(root -> right) ;
        newNode -> next = rightChild.first ; 
        tail = rightChild.second ; 
    }
    pair<Node<int>* , Node<int>*> output ;
    output.first = head ;
    output.second = tail ; 
    return output ; 
}

Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
	pair<Node<int>* , Node<int>*> ans = LLfromBST(root) ; 
    return ans.first ;
}

BinaryTreeNode<int>* takeInput() {
    int rootData;

    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    Node<int>* head = constructLinkedList(root);

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}