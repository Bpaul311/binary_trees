#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 *  in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Description: This function checks if the given
 * node is a root node in a binary tree, i.e., if
 * it has no parent.
 *
 * Return: 1 if the node is a root, 0 otherwise or
 * if the node is NULL.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

	/* Check if the node has no parent */
	if (node->parent == NULL)
	return (1);
	else
	return (0);
}
