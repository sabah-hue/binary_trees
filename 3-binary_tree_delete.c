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
	deleted_right_node = tree->right;
	deleted_left_node = tree->left;
	binary_tree_delete(deleted_right_node);
	binary_tree_delete(deleted_left_node);
	free(tree);
}
