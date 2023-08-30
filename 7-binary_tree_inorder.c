#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a binary tree in inorder and apply a func.
 * @tree: A pointer to the root node of the binary tree.
 * @func: A pointer to the function to be applied to each node's value.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
