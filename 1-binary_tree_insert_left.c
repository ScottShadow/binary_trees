#include "binary_trees.h"

/* binary_tree_insert_left - Inserts a binary node to the left
 * @parent: parent node
 * @value: Value of the node
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
                return (NULL);
	
	left_child = binary_tree_node(parent, value);
	if (left_child == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
                parent->left = left_child;
	}
	else 
	{
		left_child->left = parent->left;
		left_child->left->parent = left_child;
		parent->left = left_child;
	}
	return (left_child);
}

