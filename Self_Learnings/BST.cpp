#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
public:

    // 🔹 Insert Node
    Node* insert(Node* root, int value) {
        if (root == nullptr) {
            return new Node(value);
        }
        if (value < root->data) {
            root->left = insert(root->left, value);
        } 
        else {
            root->right = insert(root->right, value);
        }
        return root;
    }

    // 🔹 Inorder Traversal (Sorted Output)
    void inorder(Node* root) {
        if (root == nullptr) return;

        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    // 🔹 Search
    bool search(Node* root, int key) {
        if (root == nullptr) return false;

        if (root->data == key) return true;

        if (key < root->data)
            return search(root->left, key);
        else
            return search(root->right, key);
    }
};

int main() {
    BST tree;
    Node* root = nullptr;

    // Insert values
    root = tree.insert(root, 10);
    root = tree.insert(root, 5);
    root = tree.insert(root, 15);
    root = tree.insert(root, 3);
    root = tree.insert(root, 7);

    cout << "Inorder Traversal: ";
    tree.inorder(root);

    cout << "\nSearch 7: " << (tree.search(root, 7) ? "Found" : "Not Found");

    return 0;
}