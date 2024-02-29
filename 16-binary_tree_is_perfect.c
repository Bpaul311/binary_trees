#include "binary_trees.h"
/**
 * is_perfect_recursive - Checks if a binary tree is perfect recursively.
 * @tree: A pointer to the root node of the tree to check.
 * @depth: The depth of the current node.
 * @level: The level of the deepest node found so far.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t depth, size_t *level)
{
    /*  If tree is NULL, it's perfect */
    if (tree == NULL)
        return (1);

    /* If both left and right children are NULL, check if this is the deepest level */
    if (tree->left == NULL && tree->right == NULL)
    {
        /* If this is the first leaf node encountered, record its depth as the level */
        if (*level == 0)
            *level = depth;
        /*  If subsequent leaf nodes have different depths, the tree is not perfect */
        else if (depth != *level)
            return (0);
        return (1);
    }

    /**
     *  If either left or right child is NULL while the other is not,
     *  the tree is not perfect
     */
    if (tree->left == NULL || tree->right == NULL)
        return (0);

    /*  Recursively check if left and right subtrees are perfect */
    return (is_perfect_recursive(tree->left, depth + 1, level) &&
            is_perfect_recursive(tree->right, depth + 1, level));
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t level = 0;

    if (tree == NULL)
        return (0);

    /**
     * Check if the tree is balanced (i.e., left and right subtrees have
     * the same height and number of nodes)
     */
    return (is_perfect_recursive(tree, 0, &level) &&
            binary_tree_height(tree->left) == binary_tree_height(tree->right) &&
            binary_tree_nodes(tree->left) == binary_tree_nodes(tree->right));
}
