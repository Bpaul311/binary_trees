#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 * @tree: A pointer to the root node of the binary tree.
 * @func: A function to call for each node's value.
 *
 * Description: Performs pre-order traversal on the binary tree,
 * calling the specified function for each node's value.
 * If tree or func is NULL, does nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
