#include "binary_trees.h"

/**
 * find_depth_left - calculates nodes in the left direction of a binary tree
 * @tree: pointer to the root node of a binary tree.
 * Return: number of nodes in left path.
 */
int find_depth_left(const binary_tree_t *tree)
{
	if (tree)
		return (1 + find_depth_left(tree->left));
	return (0);
}

/**
 * is_perfect - checks if a every level has maxmum number of nodes.
 * @tree: pointer to the root node
 * @depth: depth of a binary tree.
 * @pos: current level during traversing.
 * Return: 1 if depth level have maxmum node or 0 if not.
 */
int is_perfect(const binary_tree_t *tree, int depth, int pos)
{
	int n;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (depth == pos + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	n = (is_perfect(tree->left, depth, pos + 1) &&
			is_perfect(tree->right, depth, pos + 1));
	return (n);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of a binary tree.
 * Return: 1 if binary tree is perfect or 0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = find_depth_left(tree);

	if (tree == NULL)
		return (0);
	return (is_perfect(tree, depth, 0));
}
