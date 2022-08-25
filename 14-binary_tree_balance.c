#include "binary_trees.h"
int find_nt_height(const binary_tree_t *);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: reference to the root node of a tree.
 *
 * Return: measured balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (find_nt_height(tree->left) - find_nt_height(tree->right));
}

/**
 * find_nt_height - calculate height of node tree
 * @tnode: reference to node of a tree
 *
 * Return: calculated height.
 */
int find_nt_height(const binary_tree_t *tnode)
{
	int left_n_height = 0, right_n_height = 0;

	if (!tnode)
		return (-1);

	if (tnode->left)
		left_n_height = find_nt_height(tnode->left) + 1;
	if (tnode->right)
		right_n_height = find_nt_height(tnode->right) + 1;

	if (left_n_height >= right_n_height)
		return (left_n_height);
	else
		return (right_n_height);
}
