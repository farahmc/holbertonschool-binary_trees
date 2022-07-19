#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_node - funciton to create binary tree node
 *@parent: pointer to parent node
 *@value: value to insert
 * Return: NULL on failure or pointer to newnode
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
