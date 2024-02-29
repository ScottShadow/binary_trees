#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node. The value of the
 *  node will be passed as a parameter to this function.
 *
 * Description: This function traverses a binary tree using in-order
 * traversal, visiting each node in the order: left subtree, root,
 * right subtree. For each visited node, the provided function `func`
 *  is called with the value of the node as a parameter.
 *
 * Return: None.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if the tree is empty */
	if (tree == NULL)
		return;

	/* Traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* Call the function for the current node */
	func(tree->n);

	/* Traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
