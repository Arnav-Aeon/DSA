#include <bits/stdc++.h>
#include <queue>
#include <algorithm>

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
// O(n^2)
// bool search(BinaryTreeNode<int>* root , int data){
//         if(root == NULL) return false ; 
//         else if(root -> data == data) return true ; 
//         return search(root -> left , data) || search(root -> right , data) ; 
// }

// void pairSum(BinaryTreeNode<int> *root, int sum) {
//     queue<BinaryTreeNode<int>*> pendingNodes ; 
//     pendingNodes.push(root) ; 

//     while(!pendingNodes.empty()){
//         BinaryTreeNode<int>* front = pendingNodes.front() ;
//         pendingNodes.pop() ;
//         if(search(root , sum - front -> data) && front -> data*2 != sum){
//             cout << min(front -> data , sum - front -> data)<< " " << max(front -> data , sum - front -> data) << endl ; 
//             front -> data = 0 ;
//         }
//         if(front -> left != NULL){
//             pendingNodes.push(front -> left) ; 
//         }
//         if(front -> right != NULL){
//             pendingNodes.push(front -> right) ; 
//         }
//     }
// }



void pairSum(BinaryTreeNode<int> *root, int sum) {

    vector<int> output ; 
    queue<BinaryTreeNode<int>*> pendingNodes ;
    pendingNodes.push(root) ;

    while(!pendingNodes.empty()){
        BinaryTreeNode<int>* front = pendingNodes.front() ; 
        output.push_back(front -> data) ; 
        pendingNodes.pop() ;
        if(front -> left != NULL) pendingNodes.push(front -> left) ; 
        if(front -> right != NULL) pendingNodes.push(front -> right) ; 
    }
    sort(output.begin() , output.end()); 

    // for(auto it = output.begin() ; it != output.end() ; ++it){
    //     cout << *it << " " ;
    // }
    // cout << endl; 

    int i = 0 , j = output.size() - 1 ; 
    while(i < j){
        if(output[i] + output[j] == sum){
            cout << output[i] << " " << output[j] << endl ; 
            i++ ;
            j-- ; 
        }
        else if(output[i] + output[j] < sum){
            i++ ; 
        }
        else{
            j-- ;
        }
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
    int sum;
    cin >> sum;
    pairSum(root, sum);
    delete root;
}