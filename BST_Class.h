#include <bits/stdc++.h>
using namespace std ;

class BST{
    BinaryTreeNode<int>* root ; 

    public:
    
    BST(){
        root = NULL ; 
    }
    ~BST(){
        delete root ; 
    }

    private:
    bool search(BinaryTreeNode<int>* root , int data){
        if(root == NULL) return false ; 
        else if(root -> data == data) return true ; 
        else if(root -> data < data) return search(root -> right , data) ; 
        return search(root -> left , data) ;
    }

    BinaryTreeNode<int>* insert(BinaryTreeNode<int>* root , int data){
        if(root == NULL){
            BinaryTreeNode<int>* newNode = new BinaryTreeNode<int>(data) ; 
            return newNode ; 
        }
        else if(root -> data < data){
            BinaryTreeNode<int>* rightChild = insert(root -> right , data) ;
            root -> right = rightChild ;
            return root ; 
        }
        BinaryTreeNode<int>* leftChild = insert(root -> left , data) ; 
        root -> left = leftChild ; 
        return root ; 
    }

    void print(BinaryTreeNode<int>* root){
        if(root == NULL) return ; 

        cout << root -> data << ":" ; 
        if(root -> left != NULL){
            cout << "L:" << root -> left -> data << "," ;
        }
        if(root -> right != NULL){
            cout << "R:" << root -> right -> data ;
        }
        cout << endl ; 
        print(root -> left) ; 
        print(root -> right) ; 
        
    }

    int smallestinBST(BinaryTreeNode<int>* root){
        if(root == NULL){
            return 0; 
        }else if(root -> left == NULL) return root -> data ; 
        return smallestinBST(root -> left) ; 
    }

    BinaryTreeNode<int>* deleteData(BinaryTreeNode<int>* root , int data){
        if(root == NULL) return NULL ;
        if(root -> data == data){
            if(root -> left == NULL && root -> right == NULL) return NULL ; 
            else if(root -> left == NULL) return root -> right ; 
            else if(root -> right == NULL) return root -> left ; 
            else{
                int small = smallestinBST(root -> right) ; 
                root -> data = small ; 
                root -> right = deleteData(root -> right , small) ; 
                return root ; 
            }
        }else{
            if(data > root -> data){
                root -> right =  deleteData(root -> right , data) ; 
                return root ; 
            }
            else{
                root -> left =  deleteData(root -> left , data)  ;
                return root ; 
            }
        }
    }

    public:
    
    void insert(int data){
        root = insert(root , data) ; 
    }

    bool search(int data){
        return search(root , data) ; 
    }
    void remove(int data){
        root = deleteData(root , data) ; 
    }

    void print() { 
        print(root) ; 
    }
};