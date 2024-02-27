#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaf nodes in a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Description: This function counts the number of leaf nodes in a binary tree.
 * A leaf node is a node with no children.
 *
 * Return: The number of leaf nodes in the binary tree, or 0 if the tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t leaves = 0;

    /* Check if the tree is NULL */
    if (tree == NULL)
        return (0);

    /* If the current node is a leaf node, increment the leaves count */
    if (tree->left == NULL && tree->right == NULL)
        leaves++;

    /* Recursively count the leaf nodes in the left and right subtrees */
    leaves += binary_tree_leaves(tree->left);
    leaves += binary_tree_leaves(tree->right);

    /* Return the total number of leaf nodes */
    return (leaves);
}
