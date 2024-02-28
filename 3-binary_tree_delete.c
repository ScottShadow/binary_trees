#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: A pointer to the root node of the binary tree to be deleted.
 *
 * Description: This function recursively deletes an entire binary tree,
 * freeing the memory allocated for each node. It starts from the root
 * node and performs a post-order traversal, deleting the left and right
 * subtrees before deleting the current node.
 *
 * Return: Void (No return value).
 */
void binary_tree_delete(binary_tree_t *tree)
{
    // Check if the input tree is NULL
    if (tree == NULL)
        return;

    // Recursively delete the left and right subtrees
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    // Free the memory allocated for the current node
    free(tree);
}
