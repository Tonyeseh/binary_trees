#include "binary_trees.h"


/**
 * max - returns the max of two size_t numbers
 *
 * @left: number of the left
 * @right: number on the right
 *
 * Return: the max number
 */

size_t max(size_t left, size_t right)
{
	if (left >= right)
		return (left);

	else
		return (right);
}

/**
 * measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL, otherwise returns the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (!tree->left && !tree->right)
		return (0);

	return (max(binary_tree_height(tree->left), binary_tree_height(tree->right)) + 1);
}
