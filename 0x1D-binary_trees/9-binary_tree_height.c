#include "binary_trees.h"

/**
* binary_tree_height - found the height of a binary tree
* @tree: given tree
* Return: depth
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t left_depth = 0;
	size_t right_depth = 0;

	left_depth = tree->left != NULL ? 1 + binary_tree_height(tree->left) : 0;
	right_depth = tree->right != NULL ? 1 + binary_tree_height(tree->right) : 0;

	return (left_depth > right_depth ? left_depth : right_depth);
}

