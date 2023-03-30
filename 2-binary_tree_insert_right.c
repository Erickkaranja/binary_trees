#include "binary_trees.h"
/**
* binary_tree_insert_right - insert a new node right of parent node.
* @parent:pointer to the node to insert the right-child in.
* @value: value of the new inserted node.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightNode;

	rightNode = binary_tree_node(parent, value);
	if (rightNode == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		rightNode->right = parent->right;
		parent->right->parent = rightNode;
	}
	parent->right = rightNode;

	return (rightNode);

}
