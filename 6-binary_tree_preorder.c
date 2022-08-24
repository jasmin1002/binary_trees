#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses tree using pre-order method
 * @tree: a reference to the root node of a tree.
 * @func: a reference to callback function to process stored value in a node.
 *
 * Return: nothing (void)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	int value = -1;

	/** base condition */
	if (!(tree && func))
		return;

	/** 1. visit a root node of a tree. **/
	value = tree->n;
	func(value);

	/** 2. visit a left sub-tree. **/
	binary_tree_preorder(tree->left, func);

	/** 3. visit a right sub-tree. **/
	binary_tree_preorder(tree->right, func);
}
