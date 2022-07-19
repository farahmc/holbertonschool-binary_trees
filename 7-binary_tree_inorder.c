#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses using inorder traversal
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to function call
 * Return:if tree of func is NULL, do nothing.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
