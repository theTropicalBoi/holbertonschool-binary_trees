#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: iPointer to the root node of the tree to measure the balance factor.
 * Return: 0 if tree if NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	return (0);

	if (tree->left)
		left_height = binary_tree_height(tree->left);
	else
		left_height = -1;

	if (tree->right)
		right_height = binary_tree_height(tree->right);
	else
		right_height = -1;

	return (left_height - right_height);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_height > right_height ? left_height : right_height);
}
