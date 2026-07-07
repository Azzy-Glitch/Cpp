#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }

    void printTree(Node *root)
    {
        if (root == nullptr)
        {
            return;
        }
        printTree(root->left);
        cout << root->data << " ";
        printTree(root->right);
    }
};

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);

    root->printTree(root);

    return 0;
}