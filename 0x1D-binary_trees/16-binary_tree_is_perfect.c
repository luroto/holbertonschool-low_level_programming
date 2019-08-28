#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
* binary_tree_is_perfect - found a perfect binary tree
* @tree: entry tree
* Return: Perfect binary tree
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_is_perfect(tree->right) &&
		binary_tree_is_perfect(tree->left) &&
		(binary_tree_height(tree->right) == binary_tree_height(tree->left)));
}
