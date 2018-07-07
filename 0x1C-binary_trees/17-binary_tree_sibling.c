#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - find sibling of node
 * @node: passed in node
 *
 * Return: pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
	{
		if (node->parent->right != NULL)
			return (node->parent->right);
		else
			return (NULL);
	}
	else
	{
		if (node->parent->left != NULL)
			return (node->parent->left);
		else
			return (NULL);
	}
	return (NULL);
}
