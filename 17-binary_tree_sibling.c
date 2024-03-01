#include "binary_trees.h"

/**
 * binary_tree_sibling -  finds the sibling of a node
 * Description: A function that  finds the sibling of a node
 * @node: pointer to the root node.
 *
 * Return: a pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

}
