#include "binary_trees.h"
/**
 * binary_tree_delete - Recursively deletes a binary tree.
 * @tree: A pointer to the root of the binary tree.
 * Return: if the binary tree is not null delete.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
	}
else
return;
}
