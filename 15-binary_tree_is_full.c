#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: if tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(*tree).left && !(*tree).right)
		return (1);
	if ((*tree).left && (*tree).right)
		return (binary_tree_is_full((*tree).right) &&
			binary_tree_is_full((*tree).left));
	return (0);
}