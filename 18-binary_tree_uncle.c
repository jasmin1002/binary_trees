#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a given node.
 * @node: reference to a given node.
 *
 * Return: NULL (node is null or no uncle relationship) reference if found.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->right && node->parent->parent->left == node->parent)
		uncle = node->parent->parent->right;
	if (node->parent->parent->right == node->parent && node->parent->parent->left)
		uncle = node->parent->parent->left;

	return (uncle);
}
