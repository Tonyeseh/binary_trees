#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as the left-child of another node
 *
 * Description: if a parent already has a left child,
 * the new node must take it's place and
 * the old left-child must be set as the left-child of the new node.
 *
 * @parent: pointer to the node that to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: NULL if parent is NULL or pointer to the created node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *old_left_child = parent->left;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	if (old_left_child)
	{
		old_left_child->parent = node;
		node->left = old_left_child;
	}
	parent->left = node;
	return (node);
}
