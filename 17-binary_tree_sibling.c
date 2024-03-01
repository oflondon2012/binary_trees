#include "binary_trees.h"
/**
 * binary_tree_sibling - function that find the sibling of a node
 *
 * @node: pointer to the node to find sibling
 * Return: Null if node is Null or hass no sibling
 * else return pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->right != node)
		return (node->parent->right);
	return (node->parent->left);
}
