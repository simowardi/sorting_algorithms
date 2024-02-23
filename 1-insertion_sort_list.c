#include "sort.h"

/**
 * swapNodesCustom - Swap two nodes in a doubly linked list
 * @listHead: Pointer to the head of the doubly linked list
 * @nodeA: Pointer to the first node to swap
 * @nodeB: Pointer to the second node to swap
 */
void swapNodesCustom(listint_t **listHead, listint_t **nodeA, listint_t *nodeB)
{
	(*nodeA)->next = nodeB->next;
	if (nodeB->next != NULL)
		nodeB->next->prev = *nodeA;
	nodeB->prev = (*nodeA)->prev;
	nodeB->next = *nodeA;
	if ((*nodeA)->prev != NULL)
		(*nodeA)->prev->next = nodeB;
	else
		*listHead = nodeB;
	(*nodeA)->prev = nodeB;
	*nodeA = nodeB->prev;
}

/**
 * insertionSortList - Sorts a doubly linked list
 *                          of integers in ascending order
 * @list: A pointer to the head of a doubly linked list of int
 */
void insertionSortList(listint_t **list)
{
	listint_t *node, *insert;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	node = (*list)->next;
	while (node != NULL)
	{
		insert = node->prev;
		while (insert != NULL && node->n < insert->n)
		{
			swapNodes(list, &insert, node);
			print_list((const listint_t *)*list);
			insert = node->prev;
		}
		node = node->next;
	}
}

