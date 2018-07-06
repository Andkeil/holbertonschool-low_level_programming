#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Create a node for binary tree
 * @parent: passed in root of binary tree
 * @value: Value of teh new node
 *
 * Return: pointer to node, NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
