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
	binary_tree_t *deleted_right_node, *deleted_left_node;

	if (tree == NULL)
		return;
	deleted_right_node = tree;
	deleted_left_node = tree->left;
	while (deleted_right_node != NULL)
	{
		deleted_right_node = tree->right;
		if (deleted_left_node != NULL)
		{
		deleted_left_node = tree->left;
		free(tree->left);
		tree->left = deleted_left_node;
		}
		free(tree);
		tree = deleted_right_node;
	}
}
