#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (count);

	while (tree->parent != NULL)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}
