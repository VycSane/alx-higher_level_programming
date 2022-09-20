#include "lists.h"

/**
 * insert_node - inserts a number in a sorted linked list
 * @head: pointer to the root node of the linked list
 * @number: the number to insert in the linked list
 *
 * Return: on Success -> (the linked list), on Error -> (NULL)
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *curr_ptr = NULL;
	listint_t *next_ptr = NULL;
	listint_t *new_node = malloc(sizeof(listint_t *));

	if (new_node == NULL)
		return (NULL);
	if (*head == NULL || number < (*head)->n)
	{
		new_node->n = number;
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	curr_ptr = *head;
	new_node->n = number;
	while (curr_ptr != NULL)
	{
		next_ptr = curr_ptr->next;
		if (curr_ptr->n <= number && next_ptr == NULL)
		{
			new_node->next = NULL;
			curr_ptr->next = new_node;
			break;
		}
		if (curr_ptr->n <= number && next_ptr->n > number)
		{
			new_node->next = next_ptr;
			curr_ptr->next = new_node;
			break;
		}
		curr_ptr = next_ptr;
	}
	return (*head);
}
