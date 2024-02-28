#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Description: This function calculates the height of a binary tree,
 * which is the length of the longest path from the root node to any leaf.
 * If the tree is NULL, the function returns 0.
 *
 * Return: The height of the binary tree, or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height_left = 0;
    size_t height_right = 0;

    /* Check if the tree is NULL */
    if (tree == NULL)
        return (0);

    /* Calculate height of the left subtree */
    height_left = 1 + binary_tree_height(tree->left);

    /* Calculate height of the right subtree */
    height_right = 1 + binary_tree_height(tree->right);

    /* Return the maximum height of the left and right subtrees */
    return ((height_left > height_right) ? height_left : height_right);
}
