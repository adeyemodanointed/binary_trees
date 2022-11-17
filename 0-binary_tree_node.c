#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - function to insert node
 * @parent: pointer to the parent node
 * @value: integer value to be inputed at node
 *
 * Return: the pointer to the node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = NULL;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent == NULL)
	{
		parent = newNode;
	}
	else
	{
		if (parent->n > value)
		{
			parent->left = newNode;
		}
		else
		{
			parent->right = newNode;
		}
		newNode->parent = parent;
	}
	return (newNode);
}

