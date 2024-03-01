#include "binary_trees.h"

/**
 * binary_tree_height - function that cal height of the
 * of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: if tree is Null return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_left > height_r ? height_left : height_right);
}

/**
 * binary_tree_balance - funtion that measures the balance factor of the
 * of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: if tree is Null return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_height = 0, left_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		left_height = 0;
	else
		left_height = 1 + ((int) binary_tree_height(tree->left));
	if (tree->right == NULL)
		right_height = 0;
	else
		right_height = 1 + ((int) binary_tree_height(tree->right));
	return (left_height - right_height);
}
