#include "11-binary_tree_size.c"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL or not perfect, and 1 if it's perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, base = 2;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	while (height > 0)
	{
		base *= 2;
		--height;
	}
	if (size == base - 1)
		return (1);
	else
		return (0);

}