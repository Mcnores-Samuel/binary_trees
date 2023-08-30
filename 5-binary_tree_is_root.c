#include "binary_trees.h"
/**
* binary_tree_is_root - checks if the node is the root of the binary tree
* @node: node to be checked
* Return: Return 1 if the node is root or 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	else if (!node->parent)
		return (1);

	return (0);
}
