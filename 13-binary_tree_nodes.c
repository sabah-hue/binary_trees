#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * Description: A function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: pointer to the root node.
 *
 * Return: counts the nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t tree_nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	tree_nodes = binary_tree_nodes(tree->left);
	tree_nodes += binary_tree_nodes(tree->right);
	return (tree_nodes + 1);
}
