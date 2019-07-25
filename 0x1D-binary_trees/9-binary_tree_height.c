#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *@tree: Pointer to the root of the binary tree
 * Return: the height of the tree, if this is null, it will return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 1;
	size_t height_r = 1;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
		height_l += binary_tree_height(tree->left);
	if (tree->right != NULL)
		height_r += binary_tree_height(tree->right);
	if (tree->right == NULL && tree->left == NULL)
		return(0);
	if (height_l > height_r)
		return (height_l);
	return (height_r);
}
