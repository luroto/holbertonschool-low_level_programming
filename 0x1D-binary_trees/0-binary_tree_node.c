#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 *@parent: Pointer to the parent node;
 *@value: Value to be assigned to the node
 * Return:  A pointer to the new node or NULL if it fails
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
