#include "monty.h"
/**
 * print_stack - prints the elements of the stack
 * @head: pointer to the stack head
 * @counter: not used
 * Return: no return value
*/
void print_stack(stack_t **head, unsigned int counter)
{
    stack_t *current;
    (void)counter;

    current = *head;
    if (current == NULL)
        return;
    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}

