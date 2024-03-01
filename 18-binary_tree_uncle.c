#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that find uncle of the binary tree
 * @node: pointer to the node of the tree
 *
 * Return: Null if parent is NULL else return parent
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
