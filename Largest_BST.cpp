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

class helper
{
public:
    int height;
    int min;
    int max;
    bool isBST;

    helper()
    {
        height = 0;
        min = INT_MAX;
        max = INT_MIN;
        isBST = true;
    }
};

helper largestBST(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        helper H;
        return H;
    }
    helper leftAns = largestBST(root->left);
    helper rightAns = largestBST(root->right);
    if (leftAns.isBST && rightAns.isBST && root->data > leftAns.max && root->data < rightAns.min)
    {
        helper ans;
        ans.max = rightAns.max;
        if (root -> right == NULL)
            ans.max = root->data;
        ans.min = leftAns.min;
        if (root -> left == NULL)
            ans.min = root->data;
        ans.height = 1 + max(leftAns.height, rightAns.height);
        ans.isBST = true;
        return ans;
    }
    else
    {
        if (leftAns.height > rightAns.height)
        {
            leftAns.isBST = false;
            return leftAns;
        }
        else
        {
            rightAns.isBST = false;
            return rightAns;
        }
    }
}

int largestBSTSubtree(BinaryTreeNode<int> *root)
{
    helper output = largestBST(root);
    return output.height;
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
    cout << largestBSTSubtree(root);
    delete root;
}