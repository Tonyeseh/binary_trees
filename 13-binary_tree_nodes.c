#include "binary_trees.h"

/**
 * counts the nodes with at least 1 child in a binary tree
 *
 * Decription: NULL pointer is not a node
 *
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: 0 if tree is NULL,
 *	otherwise the number of nodes with at least one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	else if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	else
		return (0);
}
