#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal.
 *
 * Description: A function that goes through
 * a binary tree using pre-order traversal.
 * @tree: pointer to the root node.
 * @func: pointer to a function to call for each node.
 *
 * Return: no thing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	int i;

	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	i = tree->n;
	func(i);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
