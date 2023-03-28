#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_node - function that creates a binary tree node.
* @parent: pointer to the parent node to create.
* @value: The value of the node.
* Return: The newly created node.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
