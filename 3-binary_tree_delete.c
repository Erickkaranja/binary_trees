#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_delete - function that deletes entire binary root.
* tree: The tree to be deleted.
*
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);	
}
