#include "binary_trees.h"
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int is_perfect, is_left_perfect, is_right_perfect;

    if (tree == NULL)
        return (0);

    if ((!tree->left && !tree->right) && tree->parent == NULL)
        return (0);

    is_left_perfect = binary_tree_is_perfect(tree->left);
    is_right_perfect = binary_tree_is_perfect(tree->right);
    if ((tree->left && !tree->right) || (!tree->left && tree->right) ||
        (is_left_perfect != is_right_perfect))
        is_perfect = 0;
    else
        is_perfect = 1;

    return (is_perfect);
}