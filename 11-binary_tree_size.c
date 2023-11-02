#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0(tree is null), size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, r = 0, l = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l = binary_tree_size(tree->left);
		r = binary_tree_size(tree->right);
		size = r + l + 1;
	}
	return (size);
}
