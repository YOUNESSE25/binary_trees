#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0 or int
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree == NULL)
		return (0);

	if (tree != NULL)
	{
		s += 1;
		s += binary_tree_size(tree->left);
		s += binary_tree_size(tree->right);
	}
	return (s);
}

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

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *@tree: pointer to the root node of the tree to check
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t sizeParfet = 0, n = 0, s = 0;

	if (tree == NULL)
		return (0);

	n = binary_tree_height(tree);
	sizeParfet = (1 << (n + 1)) - 1;
	s = binary_tree_size(tree);
	if (sizeParfet == s)
		return (1);
	return (0);
}
