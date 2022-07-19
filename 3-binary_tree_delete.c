#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete- delete an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Description: recursive function to delete all nodes of a tree
 *
 * Return: tree is NULL, do nothing, else delete entire tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
