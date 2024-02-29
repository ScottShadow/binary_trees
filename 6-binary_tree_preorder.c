#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree using pre-order
 *  traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node. The
 * value of the node will be passed as a parameter to this function.
 *
 * Description: This function traverses a binary tree using
 * pre-order traversal, visiting each node in the order: root,
 * left subtree, right subtree. For each visited node, the provided
 * function `func` is called with the value of the node as a parameter.
 *
 * Return: None.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if the tree is empty */
	if (tree == NULL)
		return;

	/* Call the function for the current node */
	func(tree->n);

	/* Traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
