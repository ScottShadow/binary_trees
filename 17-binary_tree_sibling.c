#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: A pointer to the sibling node, or NULL if no sibling exists or
 *         if the node or its parent is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if the node or its parent is NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Check if the node is the left child of its parent */
	if (node->parent->left == node)
		return (node->parent->right);

	/* Check if the node is the right child of its parent */
	if (node->parent->right == node)
		return (node->parent->left);

	/* Node is not a child of its parent, return NULL */
	return (NULL);
}
