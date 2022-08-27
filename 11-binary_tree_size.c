#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: 0 if tree is NULL, otherwise size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 1;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		s += binary_tree_size(tree->left);
		s += binary_tree_size(tree->right);
	}
	return (s);
}