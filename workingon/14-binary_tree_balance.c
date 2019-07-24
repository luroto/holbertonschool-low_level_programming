#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the height of a binary tree
 *@tree: Pointer to the root of the binary tree
 * Return: the height of the tree, if this is null, it will return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0;
	int height_r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	     height_l = 1 + binary_tree_balance(tree->left);
	if (tree->right != NULL)
		height_r = 1 + binary_tree_balance(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (height_l - height_r);
}
