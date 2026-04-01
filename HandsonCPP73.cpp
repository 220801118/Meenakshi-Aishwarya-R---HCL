#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int diameter = 0;

int height(Node* root) {
    if (!root) return 0;

    int left = height(root->left);
    int right = height(root->right);

    diameter = max(diameter, left + right);

    return 1 + max(left, right);
}

int getDiameter(Node* root) {
    height(root);
    return diameter;
}