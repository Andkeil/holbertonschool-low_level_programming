#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - check number of nodes in tree
 * @tree: passed in root of tree
 *
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left, right, total;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	total = left + right + 1;
	return (total);
}
