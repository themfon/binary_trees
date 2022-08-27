#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: 0 If tree is NULL, otherwise the height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_right = 0, h_left = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		h_left = binary_tree_height(tree->left);
		h_right = binary_tree_height(tree->right);
		return (1 + (h_left > h_right ? h_left : h_right));
	}
	return (0);
}