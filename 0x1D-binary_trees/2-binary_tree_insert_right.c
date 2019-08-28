#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts node to the right
 *@parent: Data about binary tree
 *@value: Int to be added to a node
 * Return: Pointer to the already created node or NULL if it fails
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode;

	if (parent == NULL)
	{
		return (NULL);
	}
	rightnode = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		parent->right->parent = rightnode;
		rightnode->right = parent->right;
	}
	parent->right = rightnode;
	return (rightnode);
}
