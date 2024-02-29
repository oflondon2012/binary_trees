#include "binary_trees.h"

/**
 * binary_tree_insert_left - funnction that insert a node as the left
 * @parent: pointer to the node to insert the left-child
 * @value: is the value to store in new node
 *
 * Return: return new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode, *oldnode;

	if (parent == NULL)
		return (NULL);
	nnode = malloc(sizeof(binary_tree_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = value;
	nnode->right = NULL;
	nnode->parent = parent;
	if (parent->left != NULL)
	{
		oldnode = parent->left;
		oldnode->parent = nnode;
		nnode->left = oldnode;
	}
	else
		nnode->left = NULL;
	parent->left = nnode;
	return (nnode);
}
