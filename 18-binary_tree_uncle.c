#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: A pointer to the node to find the uncle of.
 *
 * Return: A pointer to the uncle node, or NULL if no uncle exists or
 *         if the node or its ancestors are NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Check if the node or its parent or grandparent is NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	return (NULL);

	/* Check if the node's parent is the left child of its grandparent */
	if (node->parent->parent->left == node->parent)
	return (node->parent->parent->right);

	/* Check if the node's parent is the right child of its grandparent */
	if (node->parent->parent->right == node->parent)
	return (node->parent->parent->left);

	/* Node is not a child of its grandparent, return NULL */
	return (NULL);
}
