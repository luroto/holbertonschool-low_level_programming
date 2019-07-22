#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *@node: Node of the binary tree to be checked
 * Return: 1 if it is a leaf, otherwise 0 or in case of node NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
