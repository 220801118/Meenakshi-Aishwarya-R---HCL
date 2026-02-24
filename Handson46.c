#include <stdio.h>
#include <stdlib.h>

// Binary tree node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Create new node
struct Node* createNode(int value) {
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));
    n->data = value;
    n->left = n->right = NULL;
    return n;
}

// Compute height of tree
int height(struct Node *root) {
    if (root == NULL)
        return 0;

    int lh = height(root->left);
    int rh = height(root->right);

    return (lh > rh ? lh : rh) + 1;
}

// Helper function to check balance and compute height together
int checkBalanced(struct Node *root, int *h) {
    if (root == NULL) {
        *h = 0;
        return 1;  // balanced
    }

    int lh = 0, rh = 0;

    // Check left and right subtrees
    if (!checkBalanced(root->left, &lh))
        return 0;
    if (!checkBalanced(root->right, &rh))
        return 0;

    // Height of current node
    *h = (lh > rh ? lh : rh) + 1;

    // Check balance condition
    if (abs(lh - rh) <= 1)
        return 1;  // balanced
    else
        return 0;  // not balanced
}

// Wrapper function
int isBalanced(struct Node *root) {
    int h = 0;
    return checkBalanced(root, &h);
}

int main() {
    // Build a sample tree
    //        1
    //       / \
    //      2   3
    //     / \
    //    4   5
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    int h = height(root);
    printf("Height of tree = %d\n", h);

    if (isBalanced(root))
        printf("The tree is HEIGHT-BALANCED.\n");
    else
        printf("The tree is NOT height-balanced.\n");

    return 0;
}