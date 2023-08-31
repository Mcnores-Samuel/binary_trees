#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the parent or root node of a binary tree.
 * Return: number of nodes having atleast 1 child or 0 otherwise;
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (nodes + 1);
	return (nodes);
}
