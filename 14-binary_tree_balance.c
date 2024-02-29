#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Description: This function calculates the height of a binary tree,
 * which is the length of the longest path from the root node to any leaf.
 * If the tree is NULL, the function returns 0.
 *
 * Return: The height of the binary tree, or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);
	/* Calculate the height of the left subtree */
	left_height = binary_tree_height(tree->left);
	/* Calculate the height of the right subtree */
	right_height = binary_tree_height(tree->right);
	/* Return the maximum height of the left and right subtrees, plus 1*/
	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree node.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: balance factor of the binary tree node, or 0 if the tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);

	/* Calculate the height of the left subtree */
	left_height = binary_tree_height(tree->left);

	/* Calculate the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* Return the balance factor */
	return (left_height - right_height);
}
