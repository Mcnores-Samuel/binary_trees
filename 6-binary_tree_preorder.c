#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree in preorder..
 * @tree: A pointer to the root node of the binary tree.
 * @func: A pointer to the function to be applied to each node's value.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
