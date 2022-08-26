#include "binary_trees.h"
int tree_height(const binary_tree_t *);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: reference to the root node of a given tree.
 *
 * Return: 1 (for perfect) 0 (for imperfect)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree || (tree_height(tree->left) != tree_height(tree->right)))
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	return (binary_tree_is_perfect(tree->left) *
	binary_tree_is_perfect(tree->right));
}

/**
 * tree_height - function that measures the height of a sub-tree.
 * @tree: root node.
 *
 * Return: the height of the tree or -1 if there is no tree.
 */
int tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (-1);

	if (tree->left)
		left_height = tree_height(tree->left) + 1;
	if (tree->right)
		right_height = tree_height(tree->right) + 1;

	if (left_height >= right_height)
		return (left_height);
	return (right_height);
}
