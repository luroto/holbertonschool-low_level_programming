#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 *@tree: Tree to be visited
 *@func: Function which receives the nodes
 * Return: nothing, it's a void function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, *func);
		binary_tree_preorder(tree->right, *func);

	}
}
