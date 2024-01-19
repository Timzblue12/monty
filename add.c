#include "monty.h"
/**
 * add_top_two - adds the top two elements of the stack
 * @head: pointer to the stack head
 * @counter: line number in the file
 * Return: no return value
*/
void add_top_two(stack_t **head, unsigned int counter)
{
    stack_t *current;
    int len = 0, aux;

    current = *head;
    while (current)
    {
        current = current->next;
        len++;
    }
    if (len < 2)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    current = *head;
    aux = current->n + current->next->n;
    current->next->n = aux;
    *head = current->next;
    free(current);
}

