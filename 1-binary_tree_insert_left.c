#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left- inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Description: If parent already has a left-child, the new node must take its
 * place, and the old left-child must be set as the left-child of the new node
 *
 * Return:  a pointer to the created node or NULL on failure
 * or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = newnode;
		newnode->left = temp;
		temp->parent = newnode;
	}
	else
		parent->left = newnode;

	return (newnode);
}
