#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * Description: A function that  counts the leaves in a binary tree
 * @tree: pointer to the root node.
 *
 * Return: leaves in a binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t tree_leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	tree_leaves = binary_tree_leaves(tree->left);
	tree_leaves += binary_tree_leaves(tree->right);
	return (tree_leaves);
}
