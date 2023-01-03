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
	listint_t *previousNode;

	if (!list || !*list || !(*list)->next)
		return;

	currentNode = (*list)->next;

	while (currentNode)
	{
		previousNode = currentNode->prev;

		while (previousNode && previousNode->n > currentNode->n)
		{
			currentNode->prev = previousNode->prev;

			if (previousNode->prev)
			{
				previousNode->prev->next = currentNode;
			}
			else
			{
			*list = currentNode;
			}

			previousNode->next = currentNode->next;

			if (currentNode->next)
			{
				currentNode->next->prev = previousNode;
			}

			currentNode->next = previousNode;
			previousNode->prev = currentNode;
			print_list(*list);
			currentNode = previousNode;
			previousNode = currentNode->prev;
		}
		currentNode = currentNode->next;
	}
}
