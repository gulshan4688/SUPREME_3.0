#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }
};
void buildTree(Node* &root, int val)
{
    // if root is equal to null then make a new value root
    if (root == NULL)
    {
        root = new Node(val);
        return ;
    }
    if (val < root->data)
    {
        buildTree(root->left, val);
    }
    else
    {
        buildTree(root->right, val);
    }
}
Node *creatTree()
{
    cout << "enter the value of node" << endl;
    int val;
    cin >> val;
    Node *root = NULL;
    while (val != -1)
    {
        buildTree(root, val);
        cout << "Enter the value of Node:" << endl;
        cin >> val;
    }
    return root;
}
void LOT(Node *root)
{
    if (!root)
        return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();
        if (front == NULL)
        {
            cout<<endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<front->data<<" ";
            if (front->left)
            {
                q.push(front->left);
            }
            if (front->right)
            {
                q.push(front->right);
            }
        }
    }
}
int main()
{
    cout << "Hello world" << endl;
    Node *root = creatTree();
    LOT(root);
    return 0;
}