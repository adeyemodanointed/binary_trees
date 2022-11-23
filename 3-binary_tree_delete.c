#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - function to delete binary tree
 * @tree: pointer to root node
 * 
 * Return: None
 */

void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}

