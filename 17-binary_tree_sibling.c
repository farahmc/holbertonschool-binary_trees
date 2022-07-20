#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a given node
 * @node: pointer to given nnode
 * Return: pointer to sibling node, or NULL if error
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
	{
		return (node->parent->left);
	}
	else if (node->parent->right != node)
	{
		return (node->parent->right);
	}
	return (NULL);
}
