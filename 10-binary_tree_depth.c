#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the dept of a node in
 * binary tree
 * @tree: pointer to the node to measure the dept
 *
 * Return: tree is Null function return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *c_node;
	size_t dept = 0;

	if (tree == NULL)
		return (dept);
	c_node = (binary_tree_t *) tree;
	while (c_node->parent)
	{
		dept++;
		c_node = c_node->parent;
	}
	return (dept);
}
