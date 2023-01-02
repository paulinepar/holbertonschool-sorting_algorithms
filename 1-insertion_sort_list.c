#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the insertion sort algorithm.
 * @list: doubly linked list
 *
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *currentNode;

	if (!list || !*list || !(*list)->next)
		return;

	currentNode = (*list)->next;

	while (currentNode)
	{
		listint_t *previousNode = currentNode->prev;
		listint_t *Node = currentNode;
		int tmp = currentNode->n;

		while (previousNode > tmp)
		{
			Node->prev = previousNode->prev;
		}
	currentNode = currentNode->next;
}
}
