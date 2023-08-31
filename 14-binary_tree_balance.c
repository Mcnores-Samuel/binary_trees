#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: A pointer to the binary tree.
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree)
	{
		left_h = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right_h = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((left_h > right_h) ? left_h : right_h);
	}
	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of a binary tree.
 * Return: integer indication factor on whether a tree is balanced or not.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}


