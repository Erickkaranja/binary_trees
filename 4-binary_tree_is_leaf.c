#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks if agiven node is a leaf.
* @node: the node of check.
* Return: returns 1 if node is a leaf otherwise 0.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left != NULL || node->right != NULL || node == NULL)
	{
		return (0);
	}
	return (1);
}
