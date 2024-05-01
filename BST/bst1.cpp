#include <iostream>
using namespace std;
struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int data) : key(data), left(nullptr), right(nullptr) {}
};

class BST {
private:
    Node* root;

    Node* insertRec(Node* root, int key) {
        if (root == nullptr) {
            return new Node(key);
        }

        if (key < root->key) {
            root->left = insertRec(root->left, key);
        } else if (key > root->key) {
            root->right = insertRec(root->right, key);
        }

        return root;
    }

public:
    BST() : root(nullptr) {}

    void insert(int key) {
        root = insertRec(root, key);
    }
};

int main() {
    BST bst;

    // Insert nodes
    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    return 0;
}
