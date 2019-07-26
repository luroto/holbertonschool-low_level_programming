#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 *@tree: Pointer to the node to measure the depth
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree != NULL)
	{
		while (tree->parent != NULL)
		{
			tree = tree->parent;
			depth++;
		}
		return (depth);
	}
	return (0);
}
