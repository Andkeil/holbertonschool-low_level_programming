#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: passed in root of tree
 *
 * Return: 1 for perfect, 0 for NULL or not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leaflvl = 0;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0 &&
	    check_depth(tree, 0, &leaflvl) == 1)
		return (1);
	else
		return (0);
}

/**
 * check_depth - check depth to find level of leaves
 * @tree: tree passed in
 * @level: level
 * @leaflvl: leaf level
 *
 * Return: 1 if leaves on same level otherwise 0
 */
int check_depth(const binary_tree_t *tree, int level, int *leaflvl)
{
	if (tree->left == NULL && tree->right == NULL)
	{
		if (*leaflvl == 0)
		{
			*leaflvl = level;
			return (1);
		}
		return (level == *leaflvl);
	}
	return check_depth(tree->left, level + 1, leaflvl) &&
		check_depth(tree->right, level + 1, leaflvl);
}

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: passed in root of tree
 *
 * Return: 1 for full, 0 for NULL or not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

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
