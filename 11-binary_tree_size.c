#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @node: A pointer to the root node of the tree to measure the size.
 * Return: The size of the binary tree. If the node is NULL, returns 0.
 */
size_t binary_tree_size(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	size_t left_size, right_size;

	left_size = binary_tree_size(node->left);
	right_size = binary_tree_size(node->right);

	return (1 + left_size + right_size);
}

