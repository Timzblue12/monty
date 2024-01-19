#include "monty.h"

/**
 * f_push - Add a node to the stack or queue
 * @head: Pointer to the stack (or queue) head
 * @counter: Line number
 * Return: No return value
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	int n;

	if (glob.arg == NULL || !is_number(glob.arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_stack(*stack);
		fclose(glob.file);
		free(glob.line);
		exit(EXIT_FAILURE);
	}

	n = atoi(glob.arg);
	if (add_node(stack, n) == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(*stack);
		fclose(glob.file);
		free(glob.line);
		exit(EXIT_FAILURE);
	}
}

/**
 * is_number - checks if a string is a number
 * @str: string to check
 *
 * Return: 1 if string is a number, 0 otherwise
 */
int is_number(char *str)
{
	if (str == NULL || *str == '\0')
		return (0);

	if (*str == '-' || *str == '+')
		str++;

	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);

		str++;
	}

	return (1);
}/
