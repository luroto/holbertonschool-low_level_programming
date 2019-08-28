#include "binary_trees.h"

/**
 * binary_tree_insert_left - To add a node to the left
 *@parent: the already created binary tree (or not)
 *@value: Int to be added
 * Return: A pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode;

	if (parent == NULL)
	{
		return (NULL);
	}
	leftnode = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		parent->left->parent = leftnode;
		leftnode->left = parent->left;
	}
	parent->left = leftnode;
	return (leftnode);
}
