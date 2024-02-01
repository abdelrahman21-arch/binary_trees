#include "binary_trees.h"

/**
 * binary_tree_postorder - Traveses a tree in post-order way.
 * @tree : the pointer to the root of the tree
 * @func : the pointer to a function to call upon tree traversal. 
*/


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL )
        return;
    
    
    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);
    func(tree->n);
}
