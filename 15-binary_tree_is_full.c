#include "binary_trees.h"

/**
 * traverse_node - function the check the traverse of
 * binary tree
 * @tree: pointer to the root of the tree
 *
 * Return: always return 0
 */
int traverse_node(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (1);
	if (tree->right != NULL && tree->left != NULL)
		return (traverse_node(tree->right) && traverse_node(tree->left));
	return (0);
}
/**
 * binary_tree_is_full - function to check if binary is full
 * @tree: pointer to the root of the node
 *
 * Return: Traverse node of a tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (traverse_node(tree));
}
