#include "monty.h"

/**
 * op_pall - Print all values on the stack
 * @stack: Pointer to the top of the stack
 * @line_number: Line number of the opcode (unused)
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		(void)line_number; // Unused parameter
	}
}

