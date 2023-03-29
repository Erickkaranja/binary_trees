#include "binary_trees.h"

/**
* binary_tree_inorder - traverses a binary tree in an inorder manner.
* @tree: The tree of traversal.
* @func: The function arguement.
*
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
