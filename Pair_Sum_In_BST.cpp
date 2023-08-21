#include <iostream>
#include <queue>

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

    ~BinaryTreeNode() {
        if (left) delete left;
        if (right) delete right;
    }
};

using namespace std;

bool search(BinaryTreeNode<int> *root , int num){
    if(root == NULL) return false ;
    else if(root -> data == num){
        return true ; 
    }
    else if(root -> data > num) return search(root  -> left , num) ; 
    else return search(root -> right , num) ; 
}

void printNodesSumToS(BinaryTreeNode<int> *root, int s) {
    if (root == NULL) return ; 

    queue<BinaryTreeNode<int>*> pendingnodes ;
    pendingnodes.push(root) ; 

    while (!pendingnodes.empty()) {
        BinaryTreeNode<int>* front = pendingnodes.front() ; 
        pendingnodes.pop() ; 
        int temp = front -> data ;
        if (search(root , s - front -> data) && s != 2*front -> data){
            cout << min(front -> data , s - front -> data) << " " << max(front -> data , s - front -> data) << endl ; 
            front -> data = INT_MIN ; 
        }

        if (front -> left != NULL) pendingnodes.push(front -> left) ; 
        if (front -> right != NULL) pendingnodes.push(front -> right) ; 
    }
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

void printLevelATNewLine(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
}

int main() {
    BinaryTreeNode<int> *root = takeInput();
    int s;
    cin >> s;
    printNodesSumToS(root, s);
    delete root;
}