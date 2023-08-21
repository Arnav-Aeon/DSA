#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode()
    {
        if (left)
            delete left;
        if (right)
            delete right;
    }
};

using namespace std;

string inttochar(int data)
{

    if (data == 0) return "0" ; 
    string output = "";
    while (data > 0)
    {
        output = char(data % 10 + 48) + output;
        data /= 10;
    }
    return output;
}

void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k, string s = "")
{
    if (root == NULL || k < 0)
        return;
    if (root->left == NULL && root->right == NULL && k - root->data == 0)
    {
        cout << s << root->data << endl;
        return;
    }
    else
    {   
        s = s + inttochar(root->data) + " ";
        rootToLeafPathsSumToK(root->left, k - root->data, s);
        rootToLeafPathsSumToK(root->right, k - root->data, s);
    }
}

BinaryTreeNode<int> *takeInput()
{
    int rootData;

    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1)
        {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1)
        {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    int k;
    cin >> k;
    rootToLeafPathsSumToK(root, k);
    delete root;
}