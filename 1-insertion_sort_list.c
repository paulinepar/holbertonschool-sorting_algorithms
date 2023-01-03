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
	listint_t *currentNode, *tmpNode;

	if (!list || !*list)
		return;

	currentNode = *list;
	while (currentNode)
	{
		tmpNode = currentNode;
		currentNode = currentNode->next;

		while (tmpNode->prev && tmpNode->prev->n > tmpNode->n)
		{
			tmpNode->prev->next = tmpNode->next;
			if (tmpNode->next)
				tmpNode->next->prev = tmpNode->prev;
			tmpNode->next = tmpNode->prev;
			tmpNode->prev = tmpNode->prev->prev;
			tmpNode->next->prev = tmpNode;
			if (tmpNode->prev)
				tmpNode->prev->next = tmpNode;
			else
				*list = tmpNode;

			print_list(*list);
		}
	}
}
