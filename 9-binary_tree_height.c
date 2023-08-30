#include "binary_trees.h"

/**
 * calculateDepth - calculates the depth of a binary tree
 * @tree: pointer to the root node of a binary tree.
 * Return: number or integer representing binary tree depth.
 */
size_t calculateDepth(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = calculateDepth(tree->left);
	right_h = calculateDepth(tree->right);

	return (((left_h > right_h) ? left_h : right_h) + 1);
}

/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: A pointer to the binary tree.
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = calculateDepth(tree);

	if (height > 0)
		return (height - 1);
	else
		return (0);
}
