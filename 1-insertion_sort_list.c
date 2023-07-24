#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked int in ascending order
 * @list: to be sorted
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *pro;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	pro = (*list)->next;
	while (pro != NULL)
	{
		while (pro->prev != NULL && pro->n < pro->prev->n)
		{
			pro = swap_node(list, pro);
			print_list(*list);
		}
		pro = pro->next;
	}
}


/**
 * swap_node - swaps the node with the previous node
 * @list: the linked list
 * @node: node to be swaped
 * Return: The current node
 */

listint_t *swap_node(listint_t **list, listint_t *node)
{
	listint_t  *new = node, *old = node->prev;

	new->prev = old->prev;
	old->next = new->next;
	if (new->next)
		new->next->prev = old;
	new->next = old;
	if (old->prev)
		old->prev->next = new;
	else
		*list = new;
	old->prev = new;

	return (new);

}
