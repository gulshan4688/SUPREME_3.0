#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};
void insertAthead(Node *&head, Node *&tail, int d)
{
    if (head == NULL && tail == NULL)
    {
        Node *newNode = new Node(d);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(d);
        newNode->next = head;
        head = newNode;
    }
}
void inserAtTial(Node *&tail, Node *&head, int d)
{
    // first case is that LL is empty
    if (tail == NULL && head == NULL)
    {
        Node *newNode = new Node(d);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // create that Node
        Node *newNode = new Node(d);
        // add to the tail
        tail->next = newNode;
        // tail ko last mei laga do 
        tail = newNode;
    }
}
void print(Node *head)
{
    // Node *temp = head;
    // head = temp;
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    // Node *First = new Node(10);
    // First->data = 10;
    // cout<<First->data;
    // cout<<First->next;
    // Node *Sec = new Node(11);
    insertAthead(head, tail, 11);
    insertAthead(head, tail, 12);
    insertAthead(head, tail, 13);
    // print(head);
    inserAtTial(tail, head, 10);
    // print(head);
    inserAtTial(tail, head, 9);
    inserAtTial(tail, head, 8);
    print(head);
    return 0;
}