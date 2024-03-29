#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node for which to measure the depth.
 *
 * Description: This function calculates the depth of a node in a binary tree,
 * which is the distance from the node to the root. If the node is NULL or has
 * no parent, the function returns 0, indicating that the node is either not in
 * the tree or is the root itself.
 *
 * Return: The depth of the node, or 0 if the node is NULL or has no parent.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
