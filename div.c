#include "monty.h"
/**
 * divide_top_two - divides the top two elements of the stack
 * @head: pointer to the stack head
 * @counter: line number in the file
 * Return: no return value
*/
void divide_top_two(stack_t **head, unsigned int counter)
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
        fprintf(stderr, "L%d: can't div, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    current = *head;
    if (current->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    aux = current->next->n / current->n;
    current->next->n = aux;
    *head = current->next;
    free(current);
}

