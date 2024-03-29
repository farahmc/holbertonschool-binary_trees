#include "binary_trees.h"

/**
 * height- measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of tree
 */

size_t height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		int left_height = height(tree->left);
		int right_height = height(tree->right);

		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}

	return (-1);
}

/**
 * binary_tree_height- measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, your function must return 0
 * else return height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree));
}
