#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node for which to find the sibling.
 *
 * Description: This function finds the sibling of a given node in a binary tree.
 * If the node is NULL, the parent is NULL, or the node has no sibling, the function
 * returns NULL.
 *
 * Return: A pointer to the sibling node, or NULL if node is NULL, the parent is NULL,
 * or the node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if(node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
