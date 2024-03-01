#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * Description: A function that checks if a binary tree is perfect
 * @tree: pointer to the root node.
 *
 * Return: 1 if perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int check_left = 0, check_right = 0;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right)
		return (0);
	if (tree->right == NULL && tree->right)
		return (0);
	check_left = binary_tree_is_perfect(tree->left);
	check_right = binary_tree_is_perfect(tree->right);
	return (check_left && check_right);
}
