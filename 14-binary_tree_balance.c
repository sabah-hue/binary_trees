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

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * Description: A function that measures the balance factor of a binary tree
 * @tree: pointer to the root node.
 *
 * Return: balance factor..
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int tree_left = 0, tree_right = 0, balance = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		tree_left = -1;
	else
		tree_left = binary_tree_height(tree->left);
	if (tree->right == NULL)
		tree_right = -1;
	else
		tree_right = binary_tree_height(tree->right);
	balance = tree_left - tree_right;
	return (balance);
}
