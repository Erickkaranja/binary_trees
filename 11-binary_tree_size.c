#include "binary_trees.h"

/**
* binary_tree_size - finds the size of a binary tree.
* @tree: Pointer to the tree of search.
* Return: if tree is NULL return 0
*
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
