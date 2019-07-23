#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the number of nodes of a binary tree
 *@tree: pointer to the root of the tree
 * Return: The size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t itera;

	itera = 0;
	if (tree != NULL)
	{
		itera = 1 +  binary_tree_size(tree->left) + binary_tree_size(tree->right);
	}
	return (itera);
}
