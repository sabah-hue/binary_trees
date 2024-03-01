#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * Description: A function that measures the height of a binary tree
 * @tree: pointer to the root node.
 *
 * Return: height of a binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left)
		left_height = binary_tree_height(tree->left);
	else
		left_height = 0;
	if (tree->right)
		right_height = binary_tree_height(tree->right);
	else
		right_height = 0;
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
