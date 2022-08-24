#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses through a tree using postorder method.
 * @tree: a reference to the root node of a tree.
 * @func: callback reference to func to process the value stores in a node.
 *
 * Return: nothing (void).
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	int value = -1;

	/**
	 * postorder means to traverse a tree
	 * in this order: <left><right><root>.
	 *
	 */
	if (!(tree && func))	/** base condition */
		return;

	/** 1. Traverse the left sub-tree */
	binary_tree_postorder(tree->left, func);


	/** 2. Traverse the right sub-tree */
	binary_tree_postorder(tree->right, func);

	/** 3. Traverse the root node */
	value = tree->n;
	func(value);
}
