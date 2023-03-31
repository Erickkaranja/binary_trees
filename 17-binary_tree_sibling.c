#include "binary_trees.h"

/**
* binary_tree_sibling - finds the sibling to a given node.
* @node: the node of check.
* Return: the sibling node of NULL if not.
*
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent != NULL)
	{
		if (node == node->parent->left)
		{
			return (node->parent->right);
		}
		return (node->parent->left);
	}
	return (NULL);
}
