#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth
 * of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: 0 If tree is NULL, otherwise depth of the tree.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);
	if (tree->parent)
	{
		d += binary_tree_depth(tree->parent);
		d++;
	}
	return (d);
}