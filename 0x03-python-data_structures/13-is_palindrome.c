#include "lists.h"
#include <stdio.h>

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: the root node of the linked list
 * Return: 1 if linked list is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	size_t list_length = 0, i = 0;
	listint_t *tmp = *head;
	int *num_stack;

	if (head == NULL)
		return (1);

	while (tmp != NULL)
	{
		tmp = tmp->next;
		list_length++;
	}
	tmp = *head;
	num_stack = malloc(sizeof(int) * list_length);
	if (num_stack == NULL)
		exit(EXIT_FAILURE);
	while (tmp != NULL)
	{
		num_stack[i] = tmp->n;
		if (tmp->next == NULL)
			break;
		tmp = tmp->next;
		i++;
	}
	tmp = *head;
	while (tmp != NULL)
	{
		if (tmp->n != num_stack[i])
			return (0);
		tmp = tmp->next;
		i--;
	}
	free(num_stack);
	return (1);
}
