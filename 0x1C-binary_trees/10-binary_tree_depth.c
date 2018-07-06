#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - check depth of binary tree
 * @tree: passed in root of tree
 *
 * Return: height of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth_left, depth_right;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	depth_left = binary_tree_depth(tree->parent) + 1;
	depth_right = binary_tree_depth(tree->parent) + 1;

	if (depth_left > depth_right)
		return (depth_left);
	else
		return (depth_right);
}
