#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    int perfect;

    // Test Case 1: Single node tree
    root = binary_tree_node(NULL, 10);
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);
    binary_tree_delete(root);

    // Test Case 2: Perfect binary tree with height 2
    root = binary_tree_node(NULL, 10);
    root->left = binary_tree_node(root, 20);
    root->right = binary_tree_node(root, 30);
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);
    binary_tree_delete(root);

    // Test Case 3: Perfect binary tree with height 3
    root = binary_tree_node(NULL, 10);
    root->left = binary_tree_node(root, 20);
    root->right = binary_tree_node(root, 30);
    root->left->left = binary_tree_node(root->left, 40);
    root->left->right = binary_tree_node(root->left, 50);
    root->right->left = binary_tree_node(root->right, 60);
    root->right->right = binary_tree_node(root->right, 70);
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);
    binary_tree_delete(root);

    // Test Case 4: Imperfect binary tree with height 3
    root = binary_tree_node(NULL, 10);
    root->left = binary_tree_node(root, 20);
    root->right = binary_tree_node(root, 30);
    root->left->left = binary_tree_node(root->left, 40);
    root->left->right = binary_tree_node(root->left, 50);
    root->right->left = binary_tree_node(root->right, 60);
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);
    binary_tree_delete(root);

    return (0);
}
