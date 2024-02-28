#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 *
 * Description: A function that inserts a node as left-child of another node.
 * @tree: pointer to the root node.
 *
 * Return: no thing.
 */
void binary_tree_delete(binary_tree_t *tree);
{
    binary_tree_t *deleted_node;

    if (tree == NULL)
    return;
deleted_node = tree;
while (deleted_node != NULL)
{
deleted_node = tree->right;
free(tree);
tree = deleted_node;
}
return;
}
