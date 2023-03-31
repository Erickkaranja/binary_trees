#include "binary_trees.h"

/**
* binary_tree_uncle - finds an uncle to a node.
* @node: The node of check.
* Return: The uncle node if not NULL.
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent != NULL && node->parent->parent != NULL)
	{
		if (node->parent == node->parent->parent->left)
		{
			return (node->parent->parent->right);
		}
		return (node->parent->parent->left);
	}
	return (NULL);
}
