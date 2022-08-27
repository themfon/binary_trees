#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - a function that measures the balance factor
 * of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t h_L = 0, h_R = 0, bf = 0;

	if (!tree)
		return (0);

	h_L = binary_tree_height(tree->left);
	h_R = binary_tree_height(tree->right);

	bf = h_L - h_R;
	bf += (tree->left ? 0 : -1);
	bf -= (tree->right ? 0 : -1);

	return (bf);
}