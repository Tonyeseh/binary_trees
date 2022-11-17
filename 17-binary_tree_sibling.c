#include "binary_trees.h"


/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * Decription: if parent is NULL or node is NULL, it returns NULL
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node, or NULL if node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node != node->parent->left)
		return (node->parent->left);

	else
		return (node->parent->right);
}
