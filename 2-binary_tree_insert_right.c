#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 *                            of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the result node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the result node.
 *
 * Description: If parent already has a right-child, the result node
 *              takes its place and the old right-child is set as
 *              the right-child of the result node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *result;

	if (parent == NULL)
		return (NULL);

	result = binary_tree_node(parent, value);
	if (result == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		result->right = parent->right;
		parent->right->parent = result;
	}
	parent->right = result;

	return (result);
}