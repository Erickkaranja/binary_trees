#include "binary_trees.h"

/**
* binary_tree_preorder - traverse a binary tree in preorder manner.
* @tree: Binary tree of traversal.
* @func: function pointer to call for each node.
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
