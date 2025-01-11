#include <stdio.h> 
#include <stdlib.h> 
// Define the structure for the binary tree node 
struct TreeNode { 
    int data; 
    struct TreeNode* left; 
    struct TreeNode* right; 
}; 
// Function to create a new tree node 
struct TreeNode* createNode(int data) { 
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode)); 
    if (!newNode) { 
        printf("Memory allocation failed\n"); 
        exit(1); 
    } 
    newNode->data = data; 
    newNode->left = newNode->right = NULL; 
    return newNode; 
} 
// Function for inorder traversal of the tree (left, root, right) 
void inorderTraversal(struct TreeNode* root) { 
    if (root != NULL) { 
        inorderTraversal(root->left); // Traverse left subtree 
        printf("%d ", root->data);     // Print root data 
        inorderTraversal(root->right); // Traverse right subtree 
    } 
} 
// Function to construct a simple tree (for illustration) 
struct TreeNode* constructTree() { 
    struct TreeNode* root = createNode(1);  // Root node 
    root->left = createNode(2);              // Left child of root 
    root->right = createNode(3);             // Right child of root 
    root->left->left = createNode(4);        // Left child of node 2 
    root->left->right = createNode(5);       // Right child of node 2 
    root->right->left = createNode(6);       // Left child of node 3 
    root->right->right = createNode(7);      // Right child of node 3 
    return root; 
} 
// Main function 
int main() { 
    // Construct the tree 
    struct TreeNode* root = constructTree(); 
    // Display the tree using inorder traversal 
    printf("Inorder traversal of the tree: "); 
    inorderTraversal(root); 
    printf("\n"); 
    return 0; 
} 

