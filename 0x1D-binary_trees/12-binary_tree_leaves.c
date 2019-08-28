#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a tree
 *@tree: Pointer to the root of the tree
 * Return: Number of leaves found
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t itera = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}
		itera = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	}
	return (itera);
}
