#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node.
 *
 * Description: A function that inserts a node as right-child of another node.
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 *
 * Return: pointer to created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *inserted_node;

	if (parent == NULL)
		return (NULL);
	inserted_node = malloc(sizeof(binary_tree_t));
	if (inserted_node == NULL)
	{
		free(inserted_node);
		return (NULL);
	}
	inserted_node->n = value;
	inserted_node->left = NULL;
	inserted_node->right = parent->right;
	inserted_node->parent = parent;
	parent->right = inserted_node;
	if (inserted_node->right)
	{
		inserted_node->right->parent = inserted_node;
	}
	return (inserted_node);
}
