#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Description: This function calculates the size of a binary tree,
 * which is the total number of nodes in the tree, including both
 * internal (non-leaf) nodes and leaf nodes. If the tree is NULL,
 * the function returns 0, indicating an empty tree.
 *
 * Return: The size of the binary tree, or 0 if the tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size, left_size, right_size = 0; 

	if (tree == NULL)
		return (0);
	else
	{
		left_size = binary_tree_size(tree->left);
		right_size = binary_tree_size(tree->right);
		size = left_size + right_size;
	}
	return (1+size);
}                                                          
