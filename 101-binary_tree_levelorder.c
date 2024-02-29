#include "binary_trees.h"
/**
 * binary_tree_levelorder - .
 * @tree: .
 * @func: .
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if the tree is empty */
	if (tree == NULL)
		return;

	func(tree->n);
	if (!(tree->left || tree->right))
		return;
	func(tree->left->n);
	func(tree->right->n);
	/* Traverse the left subtree */
	binary_tree_levelorder(tree->left, func);
	/* Traverse the right subtree */
	binary_tree_levelorder(tree->right, func);
}
