#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * Description: A function that checks if a binary tree is full
 * @tree: pointer to the root node.
 *
 * Return: 1 if full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_left = 0, full_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
	{
		full_left = binary_tree_is_full(tree->left);
		full_right = binary_tree_is_full(tree->right);
		return (full_left && full_right);
	}
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	return (0);
}
