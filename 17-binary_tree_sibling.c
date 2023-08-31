#include "binary_trees.h"

/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node: pointer to the node to find its sibling.
 * Return: pointer to the sibling node or NULL otherwise.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node && node->parent->right != NULL)
		return (node->parent->right);

	if (node->parent->right == node && node->parent->left != NULL)
		return (node->parent->left);
	return (NULL);
}
