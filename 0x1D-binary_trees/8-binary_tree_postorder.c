#include "binary_trees.h"

/**
* binary_tree_postorder -check the inorder
* @tree: given tree
* @func: given function
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, (*func));
		func(tree->n);
		binary_tree_postorder(tree->right, (*func));
	}
}
