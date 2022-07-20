#include "binary_trees.h"

/**
 * height- find the height of a binary tree
 * @tree: the tree to assess
 *
 * Return: the tallest height
 */

size_t height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	int left_height = height(tree->left);
	int right_height = height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * binary_tree_balance- measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0, else return balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t diff;

	if (tree == NULL)
		return (0);

	diff = height(tree->left) - height(tree->right);

	return (diff);
}
/**
 * binary_tree_is_perfect - finds if binary tree is perfect
 * @tree: pointer to root node
 * Return: if tree is NULL return 0, otherwise 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_balance(tree) == 0)
		return (1);
	return (0);


}
