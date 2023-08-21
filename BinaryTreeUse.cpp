#include <bits/stdc++.h>
using namespace std ;
#include "BinaryTreeNode.cpp"
#include <queue>

void printTree(BinaryTreeNode<int>* root){
    if(root == NULL) return ;

    cout << root -> data << ":"; 
    if(root -> left != NULL){
        cout << "L " << root -> left -> data << " " ;  
    }
    if(root -> right != NULL){
        cout << "R " << root -> right -> data ; 
    }
    cout << endl ;
    printTree(root -> left) ; 
    printTree(root -> right) ;
}

// BinaryTreeNode<int>* takeInput(){
//     int rootData ; 
//     cout << "Enter data" << endl; 
//     cin >> rootData ;
//     if(rootData == -1){
//         return NULL ; 
//     }

//     BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
//     root -> left = takeInput() ; 
//     root -> right = takeInput() ; 

//     return root;  
// }

BinaryTreeNode<int>* takeInput(){
    int rootData ; 
    cout << "Enter the root" << endl; 
    cin >> rootData ; 
    if(rootData == -1){
        return NULL ;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData) ;
    queue<BinaryTreeNode<int>*> pendingNodes ;
    pendingNodes.push(root) ; 

    while(!pendingNodes.empty()){
        BinaryTreeNode<int>* front = pendingNodes.front() ; 
        pendingNodes.pop() ;
        cout << "Enter the left child of " << front -> data << endl; 
        int leftChild ; cin >> leftChild ; 
        if(leftChild != -1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChild) ;
            front -> left = child ; 
            pendingNodes.push(child) ; 
        }

        cout << "Enter the right child of " << front -> data << endl ; 
        int rightChild ; cin >> rightChild ; 
        if(rightChild != -1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChild) ; 
            front -> right = child ; 
            pendingNodes.push(child) ; 
        }
    }

    return root ; 
}

vector<int>* getRootToNodePath(BinaryTreeNode<int>* root , int data){
    if(root == NULL) return NULL ; 
    if(root -> data == data){
        vector<int>* output = new vector<int>() ; 
        output->push_back(root -> data) ; 
        return output ;
    }
    vector<int>* leftChild = getRootToNodePath(root -> left , data) ; 
    if(leftChild != NULL){
        leftChild->push_back(root -> data) ;      
        return leftChild ;
    }
    vector<int>* rightChild = getRootToNodePath(root -> right , data) ; 
    if(rightChild != NULL){
        rightChild -> push_back(root -> data) ; 
        return rightChild ; 
    } else return NULL ;  
}

int numNode(BinaryTreeNode<int>* root){
    if(root == NULL){
        return 0 ; 
    }
    return 1 + numNode(root -> right) + numNode(root -> left) ;
}

void inorder(BinaryTreeNode<int>* root){
    if(root == NULL){
        return ;
    }
    inorder(root -> left) ; 
    cout << root -> data << " " ;
    inorder(root -> right) ; 
}

int main(){
    // BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1) ; 
    // BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2) ;
    // BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3) ;

    BinaryTreeNode<int>* root = takeInput() ; 
    // printTree(root) ; 
    // cout << numNode(root) << endl ; 
    // inorder(root) ;
    vector<int>* output = getRootToNodePath(root , 8) ;
    for(int i = 0; i < output -> size() ; ++i){
        cout << output -> at(i) << " " ;
    }
    cout << endl; 
    delete root ;
    delete output ; 
    return 0 ; 
}

//1 2 3 4 5 6 7 -1 -1 8 9 -1 -1 -1 -1 -1 -1 -1 -1