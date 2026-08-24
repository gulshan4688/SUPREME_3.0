#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *mid;
    Node *right;

    Node(int val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

// return node pointer
Node *createTree()
{
    cout << "enter the value for node" << endl;
    int value;
    cin >> value;

    if (value == -1)
        return NULL;
    // created first node with value
    Node *root = new Node(value);

    // maine ek case kr liye baki recursion dekh lega

    cout << "adding left child for " << value << endl;
    root->left = createTree();
    cout << "adding right child for " << value << endl;
    root->right = createTree();
    return root;
}
int main()
{
    cout << "Hello world";
    Node* root;
    root = createTree();
    return 0;
}