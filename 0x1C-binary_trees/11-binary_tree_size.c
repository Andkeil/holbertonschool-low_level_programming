#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - check size of tree
 * @tree: passed in root of tree
 *
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int left, right, total;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	total = left + right + 1;
	return (total);
}
