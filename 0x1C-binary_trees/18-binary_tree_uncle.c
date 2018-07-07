#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle of node
 * @node: passed in node
 *
 * Return: pointer to uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left != NULL &&
	    node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	else if (node->parent->parent->right != NULL &&
		 node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (NULL);
}
