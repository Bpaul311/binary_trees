#include "binary_trees.h"
/**
 * binary_tree_balance - Calculates the balance factor of a binary tree node.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The balance factor of the binary tree node, or 0 if the tree is NULL.
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
