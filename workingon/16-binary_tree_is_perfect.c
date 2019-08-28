#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks the fullness of a tree
 *@tree: Pointer to the root of the tree
 * Return: 1 if its's full, otherwise or tree != null 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
        int fully;

        if (tree == NULL)
                return (0);
        if ((tree->left == NULL) && (tree->right == NULL))
                return (1);
        if (tree->left != NULL && tree->right != NULL)
        {
	fully = binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right);
	return(fully);
}
        return (0);
}
#include "binary_trees.h"
#include <stdio.h>
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
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *@tree: Pointer to the root of the binary tree
 * Return: the height of the tree, if this is null, it will return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 1;
	size_t height_r = 1;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
		height_l += binary_tree_height(tree->left);
	if (tree->right != NULL)
		height_r += binary_tree_height(tree->right);
	if (tree->right == NULL && tree->left == NULL)
		return(0);
	if (height_l > height_r)
		return (height_l);
	return (height_r);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *@tree: Pointer to the root node of the tree
 * Return: 1 if it is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	int level, leveleaf;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree != NULL)
	{
		level = binary_tree_height(tree);
		printf("%d \n", level);
		if (tree->left && tree->right)
			return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
		if (!tree->left && !tree->right)
		{
			leveleaf = binary_tree_depth(tree);
			printf("%u leveleaf", leveleaf);
			if (level != leveleaf)
			{
				return (0);
			}
			else
				return (1);
		}
		if (!tree->left && tree->right)
			return (0);
		if (!tree->right && tree->left)
			return (0);
	}
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
