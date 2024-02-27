#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node -  creates a binary tree node.
 *
 * Description: A function that creates a binary tree node and When created, a node does not have any child.
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *created_node = NULL;

    if (parent == NULL)
    return NULL;

if (parent->left == NULL)
{
    created_node = malloc(sizeof(binary_tree_t));
    if (created_node == NULL)
    return NULL;
created_node->n = value;
created_node->left = NULL;
created_node->right = NULL;
created_node->parent = parent;
parent->left = created_node;
return created_node;
}
if (parent->right == NULL)
{
created_node = malloc(sizeof(binary_tree_t));
if (created_node == NULL)
    return NULL;
created_node->n = value;
created_node->left = NULL;
created_node->right = NULL;
created_node->parent = parent;

parent->right = created_node;
return created_node;
}
return NULL;
}
