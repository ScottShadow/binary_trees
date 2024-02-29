#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Description: This function checks if a given node in a binary tree
 * is a leaf node, i.e., it has no children (neither left nor right).
 *
 * Return: 1 if the node is a leaf, 0 otherwise or if the node is NULL.
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
