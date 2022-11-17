#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - function to insert node
 * @parent: pointer to the parent node
 * @value: integer value to be inputed at node
 *
 * Return: the pointer to the inserted node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
		return (NULL);
	}
	else
	{
		if (parent->left == NULL)
		{
			parent->left = newNode;
		}
		else
		{
			newNode->left = parent->left;
			newNode->left->parent = newNode;
			parent->left = newNode;
		}
		newNode->parent = parent;
	}
	return (newNode);
}

