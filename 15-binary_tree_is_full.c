#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Description: This function checks whether a binary tree is full, meaning
 * every node in the tree has either 0 or 2 children, and all leaf nodes are
 * at the same level. If the tree is NULL, the function returns 0.
 *
 * Return: 1 if the binary tree is full, 0 otherwise or if the tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full, is_left_full, is_right_full;

	if (tree == NULL)
		return (0);

	is_left_full = binary_tree_is_full(tree->left);
	is_right_full = binary_tree_is_full(tree->right);
	 if ((tree->left && !tree->right) || (!tree->left && tree->right) ||
        (is_left_full != is_right_full))
        is_full = 0;
    else
        is_full = 1;

    return (is_full);
}


	
