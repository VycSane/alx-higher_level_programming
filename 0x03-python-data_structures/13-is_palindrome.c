#include "lists.h"

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: the root node of the linked list
 * Return: 1 if linked list is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	listint_t *curr_ptr = *head;
	listint_t *next_ptr = *head;
	listint_t *prev_ptr = NULL;
	size_t ptr_pos = 0, list_len, mid;

	if (head == NULL || *head == NULL)
		return (1);

	list_len = node_len(head);
	mid = list_len / 2;

	while (ptr_pos < mid)
	{
		next_ptr = next_ptr->next;
		curr_ptr->next = prev_ptr;
		prev_ptr = curr_ptr;
		curr_ptr = next_ptr;
		ptr_pos++;
	}
	if (list_len % 2 != 0)
		curr_ptr = curr_ptr->next;
	while (curr_ptr != NULL)
	{
		if (curr_ptr->n != prev_ptr->n)
			return (0);
		curr_ptr = curr_ptr->next;
		prev_ptr = prev_ptr->next;
	}
	return (1);
}

/**
 * node_len - calculates the length of a linked list
 * @head: the head of the linked list
 * Return: the length of the linked list
 */
size_t node_len(listint_t **head)
{
	size_t count = 0;
	listint_t *temp = *head;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
