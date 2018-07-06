#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measure balance factor of tree
 * @tree: passed in root of tree
 *
 * Return: balance factor, 0 for NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, total;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = get_tree_height(tree->left);
	right = get_tree_height(tree->right);

	total = left - right;
	return (total);
}

/**
 * get_tree_height - check height of binary tree
 * @tree: passed in root of tree
 *
 * Return: height of tree
 */

size_t get_tree_height(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (tree == NULL)
		return (0);
	height_left = get_tree_height(tree->left) + 1;
	height_right = get_tree_height(tree->right) + 1;

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
