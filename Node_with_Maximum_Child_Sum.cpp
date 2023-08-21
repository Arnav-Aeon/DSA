#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    if(root == NULL){
        return NULL ; 
    }
    int max = root -> data ;
    for(auto it = root -> children.begin() ; it != root -> children.end() ; ++it){
        max += (*it) -> data  ;
    } 
    TreeNode<int>* smallAns = root ; 
    for(auto it = root -> children.begin() ; it != root -> children.end() ; ++it){
        TreeNode<int>* maxNode = maxSumNode(*it) ;
        int newSum = maxNode -> data ;
        for(auto it = maxNode -> children.begin() ; it != maxNode -> children.end() ; ++it){
            newSum += (*it) -> data; 
        }
        if(max < newSum){
            max = newSum ; 
            smallAns = maxNode ; 
        }
    }

    return smallAns;
}

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main() {
    TreeNode<int>* root = takeInputLevelWise();

    TreeNode<int>* ans = maxSumNode(root);

    if (ans != NULL) {
        cout << ans->data;
    }
}