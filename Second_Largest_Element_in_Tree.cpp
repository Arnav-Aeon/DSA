#include <iostream>
#include <queue>
#include <vector>
#include <climits>
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

class custom{
    public :
    TreeNode<int>* max ; 
    TreeNode<int>* secmax ;
    custom(){
        max = NULL ; 
        secmax = NULL ;
    }
};  

custom getSecondLargest(TreeNode <int>* root){
    if(root == NULL){
        custom c ;
        return c ;
    }
    custom ans ; 
    ans.max = root ; 
    ans.secmax = NULL ; 
    for(auto it = root -> children.begin() ; it != root -> children.end() ; ++it){
        custom smallAns = getSecondLargest(*it) ; 
        if(ans.max -> data > smallAns.max -> data){
            ans.max = smallAns.max ; 
            if(ans.secmax != NULL && )
        }
    }
    return ans ; 
}

TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    custom c = getSecondLargest(root) ;
    return c.secmax; 
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

    TreeNode<int>* ans = getSecondLargestNode(root);

    if (ans != NULL) {
        cout << ans->data;
    } else {
        cout << INT_MIN;
    }

}