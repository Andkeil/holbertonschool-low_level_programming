#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - check number of leaves in tree
 * @tree: passed in root of tree
 *
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left, right, total;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	total = left + right;
	return (total);
}
