#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @node: A pointer to the node for which to measure the depth.
 * Return: The depth of the node, 0 if the node is null or the root.
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t parent_depth_right = 0;
	size_t parent_depth_left = 0;

	if (!node || !node->parent)
		return (0);

	parent_depth_right = binary_tree_depth(node->parent);

	if (parent_depth_left > parent_depth_right)
		return (parent_depth_left + 1);
	else
		return (parent_depth_right + 1);
}
