#include "lists.h"
#include <stdio.h>

/**
 * insert_node - inserts a number in a sorted linked list
 * @head: pointer to the root node of the linked list
 * @number: the number to insert in the linked list
 *
 * Return: on Success -> (the linked list), on Error -> (NULL)
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *tmp = *head;
	if (head == NULL || *head == NULL)
		return (NULL);

	if (number <= (*head)->n)
		return (add_nodeint_start(head, &number));

	while (tmp != NULL)
	{
		if (tmp->n <= number && tmp->next == NULL)
			tmp = tmp->next;
	}
	return (NULL);
}

/**
 * add_node_at_start - adds a node to the start of a linked list
 * @head: a pointer to the root of the linked list
 * @number: the data (number) to add to the linked list
 * Return: the linked list
 */
listint_t *add_nodeint_start(listint_t **head, int *number)
{
	/* Creating a pointer to a linked-list node */
	listint_t *new_node;

	/* CHECKS if the pointer to the linked-list or linked-list is NULL */
	if (head == NULL || *head == NULL)
		return (NULL);
	/* ALLOCATES memory block to the created node pointer */
	new_node = malloc(sizeof(listint_t *));
	/* CHECKS code continues on success, else return (NULL) [End]*/
	if (new_node == NULL)
		return (NULL);
	/* ASSIGNS the number to the 'n' member of the new_node struct */
	new_node->n = *number;
	/* ASSIGNS linked-list to the 'next' member of the new_node struct */
	new_node->next = *head;
	/* UPDATES the linked-list to point to the new node */
	*head = new_node;
	/* RETURNS the new linked-list */
	return (*head);
}