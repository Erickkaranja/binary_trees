#include "binary_trees.h"

/**
* binary_tree_is_root - checks if a given node is root.
* @node: The node of check.
* Return: if root return 1 else return 0.
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	return (1);
}
