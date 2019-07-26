#include "binary_trees.h"

/**
* binary_tree_is_root - check if a node is root
* @node: given node
* Return: return 1 on parent
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent)
	{
		return (0);
	}

	return (1);
}
