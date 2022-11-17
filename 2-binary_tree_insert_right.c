#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - function to insert node
 * @parent: pointer to the parent node
 * @value: integer value to be inputed at node
 *
 * Return: the pointer to the inserted node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
		if (parent->right == NULL)
		{
			parent->right = newNode;
		}
		else
		{
			newNode->right = parent->right;
			newNode->right->parent = newNode;
			parent->right = newNode;
		}
		newNode->parent = parent;
	}
	return (newNode);
}

