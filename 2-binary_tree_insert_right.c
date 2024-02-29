#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that insert a node as the right child
 * of another node
 *
 * @parent: pointer to the node to insert the right child
 * @value: to store in the new node
 *
 * Return: pointer to create node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nnode, *oldnode;

	if (parent == NULL)
		return (NULL);
	nnode = malloc(sizeof(binary_tree_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = value;
	nnode->left = NULL;
	nnode->parent = parent;
	if (parent->right != NULL)
	{
		oldnode = parent->right;
		oldnode->parent = nnode;
		nnode->right = oldnode;
	}
	else
		nnode->right = NULL;
	parent->right = nnode;
	return (nnode);
}

