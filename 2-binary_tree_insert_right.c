#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right- inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Description: If parent already has a right-child, the new node must take its
 * place, and the old right-child must be set as the right-child of the new
 * node
 *
 * Return:  a pointer to the created node or NULL on failure
 * or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = newnode;
		newnode->right = temp;
		temp->parent = newnode;
	}
	else
		parent->right = newnode;

	return (newnode);
}
