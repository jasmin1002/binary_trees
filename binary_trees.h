#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
binary_tree_is_root(const binary_tree_t *node);
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
binary_tree_is_full(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling;
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s);
static size_t _height(const binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);
void binary_tree_level(const binary_tree_t *tree, size_t l, void (*func)(int));
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
bst_t *bst_insert(bst_t **tree, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *, int);
int binary_tree_is_leaf(const binary_tree_t *);
void binary_tree_preorder(const binary_tree_t *, void (*)(int));
void binary_tree_postorder(const binary_tree_t *, void (*)(int));
size_t binary_tree_depth(const binary_tree_t *);
size_t binary_tree_leaves(const binary_tree_t *);
#endif /* End _BINARY_TREES_H_ */
