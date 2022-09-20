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
	listint_t *tmp = NULL;
	listint_t *new_node = malloc(sizeof(listint_t *));

	if (head == NULL || *head == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	if (number < (*head)->n)
	{
		new_node->n = number;
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	tmp = *head;
	new_node->n = number;
	while (tmp != NULL)
	{
		if (tmp->n <= number && tmp->next == NULL)
		{
			new_node->next = NULL;
			tmp->next = new_node;
			return (*head);
		}
		if (tmp->n <= number && tmp->next->n > number)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (*head);
		}
		tmp = tmp->next;
	}
	return (*head);
}
