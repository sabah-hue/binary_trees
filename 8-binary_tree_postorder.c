#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree
 * using post-order traversal.
 *
 * Description: A function that goes through
 * a binary tree using post-order traversal.
 * @tree: pointer to the root node.
 * @func: pointer to a function to call for each node.
 *
 * Return: no thing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	int i;

	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	i = tree->n;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(i);
}
