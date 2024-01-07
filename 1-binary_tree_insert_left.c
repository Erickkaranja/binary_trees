#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_insert_left - insert node as a left-child of another node.
* @parent: pointer to the node to insert the left-child in.
* @value: value to store in the new node.
* Return: pointer to newly created node else NULL.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *leftNode;

	leftNode = binary_tree_node(parent, value);
	if (leftNode == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		parent->left->parent = leftNode;
		leftNode->left = parent->left;
	}
	parent->left = leftNode;

	return (leftNode);
}
