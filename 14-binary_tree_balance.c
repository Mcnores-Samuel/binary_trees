#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: A pointer to the binary tree.
 * Return: The height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;
	if (tree)
	{	

		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((left_height > right_height) ? left_height : right_height);
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
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
