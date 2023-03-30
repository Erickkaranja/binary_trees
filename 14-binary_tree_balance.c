#include "binary_trees.h"

/**
* binary_tree_balance - checks if a binary tree is balanced.
* @tree: The tree of check.
* Return: the balance factor.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}
