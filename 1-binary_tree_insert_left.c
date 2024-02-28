
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 *
 * Description: A function that inserts a node as left-child of another node.
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 *
 * Return: pointer to created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	inserted_node->right = NULL;
	inserted_node->left = parent->left;
	inserted_node->parent = parent;
	parent->left = inserted_node;
	if (inserted_node->left)
	{
		inserted_node->left->parent = inserted_node;
	}
	return (inserted_node);
}
