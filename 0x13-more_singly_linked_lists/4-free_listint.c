#include "lists.h"

/**
 * free_listint - frees a listint_t linked list
 * @head: pointer to head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
