#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a binary node as the right child
 *  of a parent node.
 * @parent: A pointer to the parent node.
 * @value: The value to be stored in the new node.
 *
 * Description: This function creates a new node with the given value
 * and inserts it as the right child of the specified parent node in
 * a binary tree. If the parent already has a right child, the new
 * node takes its place, and the existing right child becomes the
 * right child of the new node.
 *
 * Return: A pointer to the created node, or NULL on failure or if
 * the parent is NULL.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);

    if (node->left == NULL && node->right == NULL)
        return (1);
    else
        return (0);
}