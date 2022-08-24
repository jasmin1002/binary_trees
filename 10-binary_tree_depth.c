#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of any given node.
 * @tree: reference to a given node.
 *
 * Return: size of depth of given node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/**
	 * Principle: traverse up the tree using the parent property
	 * of the binary_tree_t struct
	 */

	if (!(tree && tree->parent))
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
