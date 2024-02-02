#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newBTN;

	if (parent == NULL)
		return (NULL);
	
	newBTN = malloc(sizeof(binary_tree_t));
	if (newBTN == NULL)
		return (NULL);
	newBTN->n = value;
	newBTN->parent = parent;
	newBTN->left = NULL;
	newBTN->right = NULL;

	if (newBTN == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newBTN->left = parent->left;
		parent->left->parent = newBTN;
	}
	parent->left = newBTN;

	return (newBTN);
}
