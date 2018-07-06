#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse tree postorder
 * @tree: passed in root of tree
 * @func: function passed in to be used with value of each node
 *
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
