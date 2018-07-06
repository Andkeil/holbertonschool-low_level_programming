#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse tree inorder
 * @tree: passed in root of tree
 * @func: function passed in to be used with value of each node
 *
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);

}
