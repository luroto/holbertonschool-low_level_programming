#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 *@node: Node to find its sibling
 * Return: a pointer to the sibling node, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node != NULL && node->parent != NULL)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		if (node->parent->right == node)
			return (node->parent->left);
	}
	return (NULL);
}
