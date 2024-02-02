#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 or int
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		int right = 0, left = 0;

		if (tree->left)
			left = 1 + binary_tree_height(tree->left);

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);

		if (left < right)
			return (right);
		else
			return (left);
	}
	else
		return (0);
}

