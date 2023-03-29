#include "binary_trees.h"
#include <stdio.h>
/**
* binary_tree_height - finds the height of a binary tree.
* @tree: The tree arguement.
* Return: The height of the tree.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, max;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (right_height > left_height)
	{
		max = right_height;
	}
	else
		max = left_height;

	return (max + 1);
}
