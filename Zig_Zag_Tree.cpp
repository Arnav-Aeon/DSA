#include <iostream>
#include <queue>
#include <stack>
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
void zigZagOrder(BinaryTreeNode<int> *root) {
        queue<BinaryTreeNode<int>*> pendingNodes ; 
    pendingNodes.push(root) ; 
    int temp = 1;
    bool t = true ;

    while(!pendingNodes.empty()){
        int temp2 = 0 ;
        stack<int> temps ;
        while(temp--){
            BinaryTreeNode<int>* front = pendingNodes.front() ;
            if(!t){
                temps.push(front -> data) ; 
            }
            else cout << front -> data << " " ; 
            pendingNodes.pop() ;

            if(front -> left != NULL){
                pendingNodes.push(front -> left) ; 
                temp2++ ; 
            }
            if(front -> right != NULL){
                pendingNodes.push(front -> right) ;
                temp2++ ; 
            }
            

        }
        while(!temps.empty()){
            cout << temps.top() << " " ;
            temps.pop() ;
        }
        cout << endl ;
        temp = temp2 ;
        t  = !t ; 
    }
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
    zigZagOrder(root);
}