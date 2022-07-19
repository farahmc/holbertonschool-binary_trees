#include "binary_trees.h"

/**
 * binary_tree_size - measures size of binary tree
 * @tree: pointer to root node of tree
 * Return: if tree is null return 0, otherwise return size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return(0);

	left= binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (1 + left + right);
	// +1 for the root node
}
