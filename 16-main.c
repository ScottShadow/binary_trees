#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    binary_tree_t *root;
    int perfect;

    // Test Case 1: Empty tree
    root = NULL;
    printf("Empty Tree:\n");
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);

    // Test Case 2: Single node tree
    root = binary_tree_node(NULL, 10);
    printf("Single Node Tree:\n");
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);
    binary_tree_delete(root);

    // Test Case 3: Perfect binary tree with height 2
    root = binary_tree_node(NULL, 10);
    root->left = binary_tree_node(root, 20);
    root->right = binary_tree_node(root, 30);
    printf("Perfect Binary Tree (Height 2):\n");
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);
    binary_tree_delete(root);

    // Test Case 4: Perfect binary tree with height 3
    root = binary_tree_node(NULL, 10);
    root->left = binary_tree_node(root, 20);
    root->right = binary_tree_node(root, 30);
    root->left->left = binary_tree_node(root->left, 40);
    root->left->right = binary_tree_node(root->left, 50);
    root->right->left = binary_tree_node(root->right, 60);
    root->right->right = binary_tree_node(root->right, 70);
    printf("Perfect Binary Tree (Height 3):\n");
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);
    binary_tree_delete(root);

    // Test Case 5: Imperfect binary tree with height 3
    root = binary_tree_node(NULL, 10);
    root->left = binary_tree_node(root, 20);
    root->right = binary_tree_node(root, 30);
    root->left->left = binary_tree_node(root->left, 40);
    root->left->right = binary_tree_node(root->left, 50);
    root->right->left = binary_tree_node(root->right, 60);
    printf("Imperfect Binary Tree (Height 3):\n");
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);
    binary_tree_delete(root);

    // Test Case 6: Complete binary tree with height 3
    root = binary_tree_node(NULL, 10);
    root->left = binary_tree_node(root, 20);
    root->right = binary_tree_node(root, 30);
    root->left->left = binary_tree_node(root->left, 40);
    root->left->right = binary_tree_node(root->left, 50);
    root->right->left = binary_tree_node(root->right, 60);
    root->right->right = binary_tree_node(root->right, 70);
    printf("Complete Binary Tree (Height 3):\n");
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);
    binary_tree_delete(root);

    // Test Case 7: Left-skewed binary tree
    root = binary_tree_node(NULL, 10);
    root->left = binary_tree_node(root, 20);
    root->left->left = binary_tree_node(root->left, 30);
    root->left->left->left = binary_tree_node(root->left->left, 40);
    printf("Left-skewed Binary Tree:\n");
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);
    binary_tree_delete(root);

    // Test Case 8: Right-skewed binary tree
    root = binary_tree_node(NULL, 10);
    root->right = binary_tree_node(root, 20);
    root->right->right = binary_tree_node(root->right, 30);
    root->right->right->right = binary_tree_node(root->right->right, 40);
    printf("Right-skewed Binary Tree:\n");
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);
    binary_tree_delete(root);

    // Test Case 9: Binary tree with duplicate values
    root = binary_tree_node(NULL, 10);
    root->left = binary_tree_node(root, 20);
    root->right = binary_tree_node(root, 20);
    root->left->left = binary_tree_node(root->left, 30);
    root->right->left = binary_tree_node(root->right, 30);
    printf("Binary Tree with Duplicate Values:\n");
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);
    binary_tree_delete(root);

    // Test Case 10: Random binary tree
    root = binary_tree_node(NULL, 10);
    root->left = binary_tree_node(root, 20);
    root->right = binary_tree_node(root, 30);
    root->left->left = binary_tree_node(root->left, 40);
    root->left->right = binary_tree_node(root->left, 50);
    root->right->left = binary_tree_node(root->right, 60);
    root->right->right = binary_tree_node(root->right, 70);
    root->right->left->left = binary_tree_node(root->right->left, 80);
    root->right->left->right = binary_tree_node(root->right->left, 90);
    printf("Random Binary Tree:\n");
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);
    binary_tree_delete(root);

    return (0);
}
