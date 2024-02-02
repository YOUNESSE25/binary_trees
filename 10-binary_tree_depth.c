#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth
 * of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: int or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree != NULL && tree->parent != NULL)
		d = 1 + binary_tree_depth(tree->parent);
		return (d);
	else
		return (0);
}