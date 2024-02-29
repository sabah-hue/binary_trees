#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree.
 *
 * Description: A function that  deletes an entire binary tree.
 * @tree: pointer to the root node.
 *
 * Return: no thing.
 */
void binary_tree_delete(binary_tree_t *tree)
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
}
