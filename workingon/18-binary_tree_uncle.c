#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds a node's uncle
 *@node: The node to be checked
 * Return: A pointer to the uncle, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent->parent->right == node->parent)
			return (node->parent->parent->left);
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
	}
	return (NULL);
}
