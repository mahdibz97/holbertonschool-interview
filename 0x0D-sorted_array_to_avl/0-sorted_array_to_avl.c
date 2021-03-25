#include "binary_trees.h"

/**
 * create - create
 * @array: array
 * @start: start
 * @end: end
 * @parent: parent
 * Return: created AVL tree
 */
avl_t *create(int *array, int start, int end, avl_t *parent)
{
	avl_t *root;
	int mid;

	if (start > end)
		return (NULL);

	mid = (start + end) / 2;
	root = malloc(sizeof(avl_t));
	if (!root)
		return (NULL);
	root->n = array[mid];
	root->parent = parent;
	root->left = create(array, start, mid - 1, root);
	root->right = create(array, mid + 1, end, root);
	return (root);
}

/**
 * sorted_array_to_avl - create an AVL tree from an array
 * @array: array
 * @size: Size
 * Return: pointer
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	int i;

	if (!array || size < 1)
		return (NULL);
	for (i = 1; i < (int)size; i++)
	{
		if (array[i] < array[i - 1])
			return (NULL);
	}
	return (create(array, 0, (int)size - 1, NULL));
}
