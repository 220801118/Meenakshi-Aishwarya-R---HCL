#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int value) {
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

// Insert into BST
struct Node* insert(struct Node *root, int value) {
    if (root==NULL) {
        return createNode(value);
    }

    if (value<root->data) {
        root->left=insert(root->left, value);
    } else if (value>root->data) {
        root->right = insert(root->right, value);
    }
    return root;
}

int search(struct Node *root, int key) {
    if (root==NULL) {
        return 0;
    }

    if (key == root->data) {
        return 1;
    } else if (key < root->data) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}

void inorder(struct Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct Node *root = NULL;
    int choice, value;

    while (1) {
        printf("\n--- Binary Search Tree Menu ---\n");
        printf("1. Insert\n");
        printf("2. Search\n");
        printf("3. Inorder Traversal\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter value to insert: ");
            scanf("%d", &value);
            root = insert(root, value);
            printf("Inserted %d\n", value);
        }
        else if (choice == 2) {
            printf("Enter value to search: ");
            scanf("%d", &value);
            if (search(root, value))
                printf("Value %d found in BST.\n", value);
            else
                printf("Value %d not found in BST.\n", value);
        }
        else if (choice == 3) {
            printf("Inorder Traversal: ");
            inorder(root);
            printf("\n");
        }
        else if (choice == 4) {
            printf("Exiting...\n");
            break;
        }
        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}