#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the height of a binary tree
 *@tree: Pointer to the root of the binary tree
 * Return: the height of the tree, if this is null, it will return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	if (tree != NULL)
	{
		height_l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
		height_r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
		return (height_l - height_r);
	}
	return (0);
}
