#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Create a left child for binary tree
 * @parent: passed in parent
 * @value: Value of the new node
 *
 * Return: pointer to node, NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL || parent == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	parent->left = new;
	return (new);
}
