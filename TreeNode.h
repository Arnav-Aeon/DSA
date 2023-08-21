#include <vector>
using namespace std ; 

template <typename T>
class TreeNode {
    public :
    T data ;
    vector<TreeNode<T>*> children ; 

    TreeNode(T data){
        this -> data = data ;
    }

    ~TreeNode(){
        for(auto it = children.begin() ; it != children.end() ; ++it){
            delete *it; 
        }
    }

} ;