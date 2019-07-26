#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with at least 1 child
 *@tree: Pointer to the root of the tree
 * Return: Number of leaves found
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t itera = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (0);
		}
		itera =  1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	}
	return (itera);
}
