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
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return NULL;
	else if (parent == NULL)
		return NULL;
	else
		node = binary_tree_node(parent, value);

	if (parent->right == NULL)
		parent->right = node;
	else
	{
		node->right = parent->right;
		parent->right = node;
	}

	return (parent);
}
