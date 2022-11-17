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

/**
 * is_perfect - main perfect tree checker
 *
 * @tree: pointer to tree to be checked
 * @height: height of the tree
 *
 * Return: 0 if not a perfect tree, otherwise 1
 */

int is_perfect(const binary_tree_t *tree, size_t height, size_t level)
{
	if (!tree->left && !tree->right)
	{
		if (height == level)
			return (1);
		else
			return (0);
	}

	else if (!tree->left || !tree->right)
		return (0);

	else
		return (is_perfect(tree->left, height, level + 1) && is_perfect(tree->right, height, level + 1));
}


/**
 * checks if a binary tree is perfect
 *
 * Description: a binary tree is a tree where all leaves are on same level
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL and not perfect, otherwise 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	return (is_perfect(tree, height, 0));
}
