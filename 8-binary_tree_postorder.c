#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree in postorder..
 * @tree: A pointer to the root node of the binary tree.
 * @func: function to be applied to each node's value.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
