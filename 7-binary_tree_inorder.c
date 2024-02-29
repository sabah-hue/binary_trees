#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal.
 *
 * Description: A function that goes through
 * a binary tree using in-order traversal.
 * @tree: pointer to the root node.
 * @func: pointer to a function to call for each node.
 *
 * Return: no thing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	int i;

	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	i = tree->n;
	binary_tree_inorder(tree->left, func);
	func(i);
	binary_tree_inorder(tree->right, func);
}
