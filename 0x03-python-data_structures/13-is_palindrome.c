#include "lists.h"

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: the root node of the linked list
 * Return: 1 if linked list is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	int ptr1_curr_pos = 1, midpoint;
	int ptr2_end_pos = 0, ptr2_curr_pos = 1;
	listint_t *ptr1 = malloc(sizeof(listint_t *));
	listint_t *ptr2 = malloc(sizeof(listint_t *));

	ptr1 = *head;
	ptr2 = *head;
	if (head == NULL)
		return (1);

	while (ptr1 != NULL)
	{
		ptr1 = ptr1->next;
		ptr2_end_pos++;
	}
	ptr1 = *head;
	midpoint = ptr2_end_pos / 2;
	while (ptr1 != NULL && ptr1_curr_pos <= midpoint)
	{
		while (ptr2 != NULL && ptr2_curr_pos <= ptr2_end_pos)
		{
			if (ptr2_curr_pos == ptr2_end_pos && ptr1->n != ptr2->n)
				return (0);
			ptr2 = ptr2->next;
			ptr2_curr_pos++;
		}
		ptr2_curr_pos = 1, ptr2_end_pos--;
		ptr2 = *head;
		ptr1_curr_pos++;
		ptr1 = ptr1->next;
	}
	free(ptr1);
	free(ptr2);
	return (1);
}
