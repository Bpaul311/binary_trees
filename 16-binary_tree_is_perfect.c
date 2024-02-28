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

	/*Return maximum height of left and right subtrees, plus 1 for current node */
	return (1 + (left_height > right_height ? left_height : right_height));
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Description: This function checks whether a binary tree is perfect, meaning
 * all levels of the tree are completely filled. If the tree is NULL or not
 * perfect, the function returns 0.
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise or if the tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height == right_height) ? 1 : 0);
}
