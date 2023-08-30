#include "binary_trees.h"

/**
* binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
* @node: a pointer to the node to be checked
* Return: return 1 if the node is a leaf or 0.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	else if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
