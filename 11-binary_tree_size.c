#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a node in a binary tree
 * Description: A function that measures the size of a node in a binary tree
 * @tree: pointer to the root node.
 *
 * Return: size of a binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_tree_left = 0, size_tree_right = 0;

	if (tree == NULL)
		return (0);
	size_tree_left = binary_tree_size(tree->left);
	size_tree_right = binary_tree_size(tree->right);
	return (size_tree_left + size_tree_right + 1);
}
