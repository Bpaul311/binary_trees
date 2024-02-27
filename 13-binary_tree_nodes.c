#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the number of nodes with at least 1 child
 *                     in a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Description: This function counts the number of nodes in a binary tree
 * that have at least one child, excluding leaf nodes. If the tree is NULL,
 * the function returns 0, and a NULL pointer is not considered a node.
 *
 * Return: The number of nodes with at least one child in the binary tree,
 *         or 0 if the tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);

	/* If the current node has atleast one chid, increment the nodes count */
	if (tree->left != NULL || tree->right != NULL)
	nodes++;

	/* Recursively count the nodes in the left and right subtrees */
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	/* Return the total number of nodes */
	return (nodes);
}
