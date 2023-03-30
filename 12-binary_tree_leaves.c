#include "binary_trees.h"

/**
* binary_tree_leaves - counts leaves in a binary tree.
* @tree: Tree of check.
* Return: if tree is NULL 0 else number of leaves.
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
