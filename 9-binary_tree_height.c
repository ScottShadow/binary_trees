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
    size_t left_height, right_height;

    /* If tree is NULL, height is 0 */
    if (tree == NULL)
        return (0);

    /*  Recursively calculate the height of the left and right subtrees */
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    /*  Return the maximum height of the left and right subtrees, plus 1 for the current node */
    return (1 + (left_height > right_height ? left_height : right_height));
}
