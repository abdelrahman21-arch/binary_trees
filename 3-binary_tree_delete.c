#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree.
 * @tree: A pointer to the root of the tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree->left)
    {
        binary_tree_delete(tree->left);
        free(tree->left);
    }
    if (tree->right)
    {
        binary_tree_delete(tree->right);
        free(tree->right);
    }

}