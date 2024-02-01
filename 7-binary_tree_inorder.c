#include "binary_trees.h"

/**
 * binary_tree_inorder - Traveses a tree in in-order way.
 * @tree : the pointer to the root of the tree
 * @func : the pointer to a function to call upon tree traversal. 
*/


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL )
        return;
    
    
    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);
}