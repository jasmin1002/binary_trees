#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a node at the top level to subsequent node to attach
 * @value: information to store in a newly created node
 *
 * Return: NULL (failure) node (Success)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (node == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);

	if (parent->right == NULL)
		parent->right = binary_tree_node(parent, value);
	else
	{
		node->right = parent->right;
		parent->right = node;
	}

	return (parent);
}
