#include "binary_trees.h"

/**
 * counts the leaves in a binary tree
 *
 * Description: NULL pointer is not a leaf
 *
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0 if tree is NULL, otherwise number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	else if (tree->left || tree->right)
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));

	else
		return (1);
}
