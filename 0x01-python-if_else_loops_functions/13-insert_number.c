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
	listint_t *new_node = NULL;
	listint_t *curr_ptr = NULL;
	listint_t *next_ptr = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	if (number <= (*head)->n)
		return (add_nodeint_start(head, &number));

	new_node = malloc(sizeof(listint_t *));
	if (new_node == NULL)
		return (NULL);
	curr_ptr = *head;
	while (curr_ptr != NULL)
	{
		next_ptr = curr_ptr->next;
		if (curr_ptr->n <= number && next_ptr == NULL)
			return (add_nodeint_end(head, number));
		if (curr_ptr->n <= number && next_ptr->n > number)
		{
			new_node->n = number;
			new_node->next = next_ptr->next;
			curr_ptr->next = new_node;
			return (*head);
		}
		curr_ptr = next_ptr;
	}
	return (NULL);
}

/**
 * add_nodeint_start - adds a node to the start of a linked list
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
