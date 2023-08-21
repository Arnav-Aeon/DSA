#include <bits/stdc++.h>
#include <queue>
using namespace std ; 

#include "TreeNode.h"

TreeNode<int>* takeInputlevelwise(){
    int rootData ;
    cout << "Enter the root data" << endl; 
    cin >> rootData ; 
    TreeNode<int>* root = new TreeNode<int>(rootData) ;

    queue<TreeNode<int>*> pendingNodes ; 

    pendingNodes.push(root) ; 
    while(!pendingNodes.empty()){
        TreeNode<int>* front = pendingNodes.front() ; 
        pendingNodes.pop() ; 
        cout << "Enter the number of childrens of " << front -> data << endl ;
        int numChild ; cin >> numChild ; 
        for(int i = 0 ; i < numChild ; i++){
            int childData ;
            cout << "Enter the " << i+1 << "th child of " << front -> data << endl ; 
            cin >> childData ;
            TreeNode<int>* child = new TreeNode(childData) ;
            front -> children.push_back(child) ; 
            pendingNodes.push(child) ; 
        }
    }

    return root ;
}

int num_Nodes(TreeNode<int>* root){
    if(root == NULL){
        return 0 ; 
    }
    int ans = 1 ;  

    for(auto it = root -> children.begin() ; it != root -> children.end() ; ++it){
        ans += num_Nodes(*it) ; 
    }

    return ans ; 
}

void deleteTree(TreeNode<int>* root){
    for(auto it = root -> children.begin() ; it != root -> children.end() ; ++it){
        deleteTree(*it) ; 
    }
    delete root ; 
}

void printAtLevelk(TreeNode<int> *root , int k){
    if(root == NULL){
        return ; 
    }
    if(k == 0){
        cout << root -> data << endl ; 
        return ;
    }

    for(auto it = root -> children.begin() ; it != root -> children.end() ; ++it){
        printAtLevelk(*it , k - 1) ; 
    }
}

TreeNode<int>* takeInput(){
    int rootData ; 
    cout << "Enter the data" << endl ;
    cin >> rootData ;
    TreeNode<int>* root = new TreeNode<int>(rootData) ; 

    int n ; 
    cout << "Enter the number of children of " << rootData << endl ;
    cin >> n ; 
    while(n--){
        root -> children.push_back(takeInput()) ; 
    }
    return root ; 
}

void printTree(TreeNode<int>* root){
    if(root == NULL){
        return ; 
    }
    cout << root -> data << ":";
    for(auto it = root->children.begin() ; it != root -> children.end() ; ++it){
        cout << (*it) -> data << ", "; 
    }
    cout << endl ;
    for(auto it = root->children.begin() ; it != root -> children.end() ; ++it){
        printTree(*it) ; 
    }
}

void preorder(TreeNode<int>* root){
    if(root == NULL){
        return ; 
    }
    cout << root -> data << " " ; 
    for(auto it = root -> children.begin() ; it != root -> children.end() ; ++it){
        preorder(*it) ; 
    }
}

int main(){
    
    // 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0    

    // TreeNode<int>* root = new TreeNode<int>(1) ; 
    // TreeNode<int>* node1 = new TreeNode<int>(2) ; 
    // TreeNode<int>* node2 = new TreeNode<int>(3) ; 

    // root -> children.push_back(node1) ; 
    // root -> children.push_back(node2) ; 

    TreeNode<int>* root ;
    root = takeInputlevelwise() ;
    printTree(root) ; 
    cout << num_Nodes(root) << endl ;
    cout << "Level 2:" << endl; 
    printAtLevelk(root , 2); 
    preorder(root) ; 
    return 0 ; 
}