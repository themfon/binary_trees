#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle -  a function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: a pointer to the uncle node, and NULL If node is NULL or
 * node has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;
	binary_tree_t *sibiling = NULL;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	parent = node->parent;
	sibiling = binary_tree_sibling(parent);
	return (sibiling);
}