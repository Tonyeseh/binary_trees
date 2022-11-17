#include "binary_trees.h"


#include "binary_trees.h"

/**
 * depth - measures the depth of a node in a binary tree
 *
 * @tree: pointer to the node to measure the depth
 *
 * Return: 0 if tree id NULL, otherwise the depth in size_t
 */

size_t depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	return (depth(tree->parent) + 1);
}


/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor of th two nodes,
 *	otherwise NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)second);

	if (depth(first) > depth(second))
		return (binary_trees_ancestor(first->parent, second));

	else if (depth(first) < depth(second))
		return (binary_trees_ancestor(first, second->parent));

	else
		return (binary_trees_ancestor(first->parent, second->parent));
}
