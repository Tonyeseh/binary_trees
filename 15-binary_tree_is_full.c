#include "binary_trees.h"

/**
 * checks if a binary tree is full
 *
 * Description: a binary tree is full when all nodes has either 0 or 2 children
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: if tree is full return 1, otherwise return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	else if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	else
		return (0);
}
