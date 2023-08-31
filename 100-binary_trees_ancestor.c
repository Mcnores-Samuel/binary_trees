#include "binary_trees.h"

/**
 * common_ancestor - looks for a node have the same value as root node
 * running subsequently
 * @root: pointer to the root node of a binary tree.
 * @first: value for the first node
 * @second: value for the second node
 * Return: pointer to the lowest common ancestor node.
 */
binary_tree_t *common_ancestor(binary_tree_t *root, int first, int second)
{
	binary_tree_t *tmp1, *tmp2;

	if (root == NULL)
		return (NULL);
	if (root->n == first || root->n == second)
		return (root);

	tmp1 = common_ancestor(root->left, first, second);
	tmp2 = common_ancestor(root->right, first, second);

	if (tmp1 && tmp2)
		return (root);
	return ((tmp1 != NULL) ? tmp1 : tmp2);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *root, *first_tmp = (binary_tree_t *)first;

	if (first == NULL || second == NULL)
		return (NULL);

	while (first_tmp != NULL)
	{
		root = first_tmp;
		first_tmp = first_tmp->parent;
	}
	return (common_ancestor(root, first->n, second->n));
}
