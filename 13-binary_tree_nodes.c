#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with 1 child in binary tree
 * @tree: pointer to root node
 * Return: if tree is null return 0, otherwise count of nodes.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (0);
	
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	return (1 + left + right);
}
