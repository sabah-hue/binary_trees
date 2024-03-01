#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * Description: A function that measures the depth of a node in a binary tree
 * @tree: pointer to the root node.
 *
 * Return: depth of a binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_tree;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	depth_tree = binary_tree_depth(tree->parent) + 1;
	return (depth_tree);
}
