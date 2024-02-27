#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 * @tree: A pointer to the root node of the binary tree.
 * @func: A function to call for each node's value.
 *
 * Description: Performs pre-order traversal on the binary tree,
 * calling the specified function for each node's value.
 * If tree or func is NULL, does nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
