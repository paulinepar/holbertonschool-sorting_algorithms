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
	if (!list || !*list || !(*list)->next)
		return;

	listint_t *currentNode = (*list)->next;

	while (currentNode)
	{
		listint_t *previousNode = currentNode->prev;
		int tmp = currentNode->data;
	}
	currentNode = currentNode->next;
}
