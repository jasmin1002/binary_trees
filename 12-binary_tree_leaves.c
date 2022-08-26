#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: reference to the root node of a tree
 *
 * Return: number of leaves a tree has
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	/**
	 * Principle: a node is leave node if it has no children.
	 */
	if (!(tree->left || tree->right))
		count += 1;
	else
		count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (count);
}
