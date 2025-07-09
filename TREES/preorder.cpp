#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Preorder Traversal Function
Node* preorder(vector<int> values) {
    if (root == nullptr) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    // Step 1: Predefined vector with values
    vector<int> values = {1, 2, 3, 4, 5};

    // Step 2: Manually build the binary tree using vector values
    /*
            1
           / \
          2   3
         / \
        4   5
    */
    Node* root = preorder(values);
    root->left = new Node(values[1]);
    root->right = new Node(values[2]);
    root->left->left = new Node(values[3]);
    root->left->right = new Node(values[4]);

    // Step 3: Preorder Traversal
    cout << "Preorder Traversal: ";
    preorder(root);

    return 0;
}
