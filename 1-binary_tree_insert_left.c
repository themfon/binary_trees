#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts
 * a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node, or
 *  NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{
	binary_tree_t *new_left;

	new_left = malloc(sizeof(binary_tree_t));
	if (!new_left)
		return (NULL);
	new_left->n  = value;
	new_left->left = NULL;
	new_left->right = NULL;

	if (!parent)
	{
		free(new_left);
		return (NULL);
	}
	new_left->parent = parent;
	if (parent->left)
	{
		new_left->left = parent->left;
		new_left->left->parent = new_left;
	}
	parent->left = new_left;
	return (new_left);
}