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
	listint_t *tmpNode;
	listint_t *Node;
	listint_t *currentNode;

	if (!list || !*list || !(*list)->next)
		return;

	tmpNode = NULL;
	Node = *list;

	while (Node)
	{
		listint_t *nextNode = Node->next;

		if (!tmpNode || tmpNode->n >= Node->n)
		{
			Node->prev = NULL;
			Node->next = tmpNode;

			if (tmpNode)
				tmpNode->prev = Node;
			tmpNode = Node;
		}
		else
		{
			currentNode = tmpNode;

			while (currentNode->next && currentNode->next->n < Node->n)
				currentNode = currentNode->next;

			Node->prev = currentNode;
			Node->next = currentNode->next;

			if (currentNode->next)
				currentNode->next->prev = Node;

			currentNode->next = Node;
		}
		print_list(tmpNode);

		Node = nextNode;
	}
	*list = tmpNode;
}
