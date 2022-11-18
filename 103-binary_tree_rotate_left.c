#include "binary_trees.h"


/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 *
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: New root node
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree || !tree->left)
		return (tree);

	new_root = tree->left;
	tree->right = new_root->right;
	new_root->right = tree;
	tree->right->parent = tree;
	tree->parent = new_root;
	new_root->parent = NULL;

	return (new_root);
}
