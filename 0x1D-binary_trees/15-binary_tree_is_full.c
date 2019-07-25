#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks the fullness of a tree
 *@tree: Pointer to the root of the tree
 * Return: 1 if its's full, otherwise or tree != null 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int fully;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		fully = binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right);
		return (fully);
	}
	return (0);
}
