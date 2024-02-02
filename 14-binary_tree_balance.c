#include "binary_trees.h"

/**
 * BT_height_balance - function that measures the height
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 or int
 */
size_t BT_height_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		int right = 1;
		int left = 1;

		if (tree->left)
			left = left + BT_height_balance(tree->left);

		if (tree->right)
			right = right + BT_height_balance(tree->right);

		if (left < right)
			return (right);
		else
			return (left);
	}
	else
		return (0);
}

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: int or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (BT_height_balance(tree->left)
			- BT_height_balance(tree->right));

	return (0);
}
