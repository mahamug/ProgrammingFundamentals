#include <iostream>
using namespace std;

// Define the structure of a tree node
struct Node {//node have no and pointer 
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

//  Inorder Traversal -----Left - Root - Right
void inorder(Node* root) {//address of current node here root and traverse real tree
    if (root == NULL) return;

    inorder(root->left);           //  left subtree recursion
    cout << root->data << " ";     // current root 
    inorder(root->right);          //  right subtree
}

// Preorder Traversal: Root Left Right
void preorder(Node* root) {
    if (root == NULL) return;

    cout << root->data << " ";     //  current
    preorder(root->left);          // left subtree
    preorder(root->right);         //  right subtree
}

//  Postorder Traversal: Left  Right  Root
void postorder(Node* root) {
    if (root == NULL) return;

    postorder(root->left);         //  left subtree
    postorder(root->right);        //  right subtree
    cout << root->data << " ";     //  current
}

int main() {
    // Create the tree manually
    Node* root = new Node(1);       // Root node
    /*   1
        / \
      NULL NULL
*/

    root->left = new Node(2);       // Left child of root
    root->right = new Node(3);      // Right child of root
    /*     1
          / \
         2   3
   */

    root->left->left = new Node(4); // Left child of 2
    root->left->right = new Node(5);// Right child of 2
    /*        1
             / \
            2   3
           / \
         4   5
    */


    // Traversals
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}

