#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: a pointer to the sibling node, NULL if node has no sibiling
 * or node is NULL or the parent is NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *new;

	if (!node || !node->parent)
		return (NULL);

	new = node->parent;

	if (node == new->left)
	{
		return (new->right);
	}
	return (new->left);
}