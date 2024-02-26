#include "binary_trees.h"

/* binary_tree_insert_right - Inserts a binary node to the right.
 * @parent: parent node
 * @value: Value of the node
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *right_child;

        if (parent == NULL)
                return (NULL);

        right_child = binary_tree_node(parent, value);
        if (right_child == NULL)
                return (NULL);

        if (parent->right == NULL)
        {
                parent->right = right_child;
        }
        else
        {
                right_child->right = parent->right;
                right_child->right->parent = right_child;
                parent->right = right_child;
        }
        return (right_child);
}
