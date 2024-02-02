#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 * to count the number of leaves
 * Return: 0 or int
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree != NULL)
	{
		if (!tree->left && !tree->right)
			l += 1;
		l += binary_tree_leaves(tree->left);
		l += binary_tree_leaves(tree->right);
	}
	return (l);
}
