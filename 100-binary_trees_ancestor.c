#include "binary_trees.h"
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes in a binary tree.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Description: This function takes two nodes in a binary tree and finds their lowest common ancestor.
 * The lowest common ancestor is the deepest node that has both given nodes as descendants. If either
 * of the nodes is NULL or there is no common ancestor, the function returns NULL.
 *
 * Return: A pointer to the lowest common ancestor node, or NULL if no common ancestor was found,
 * first or second is NULL, or the nodes are not in the same binary tree.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    const binary_tree_t *ancestor_first = first;
    const binary_tree_t *ancestor_second = second;

    if (first == NULL || second == NULL)
        return NULL;

    while (ancestor_first != ancestor_second)
    {
        if (ancestor_first == NULL)
            ancestor_first = second;
        else
            ancestor_first = ancestor_first->parent;

        if (ancestor_second == NULL)
            ancestor_second = first;
        else
            ancestor_second = ancestor_second->parent;
    }

    return (binary_tree_t *)ancestor_first;
}
