#include"binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL)
		return (NULL);
	temp->parent = parent;
	temp->left = NULL;
	temp->right = NULL;
	temp->n = value;
	return (tmp);
}
