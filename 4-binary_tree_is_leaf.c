#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a given node is a node leaf
 * @node: a reference of node to check
 *
 * Return: 0 (False) 1 (True)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int is_leaf = -1;

	if (node == NULL)
		return (0);
	if (node->left && node->right)
		is_leaf = 0;
	else if (node->left || node->right)
		is_leaf = 0;
	else
		is_leaf = 1;

	return (is_leaf);
}
