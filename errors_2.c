#include "monty.h"

int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pint_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * pop_error - prints pop error
 * @line_number: line num
 *
 * Return: (EXIT_FAILURE) always
 */
int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILUR);
}
/**
 * pint_error -print pint error
 * @line_number: line number in Monty
 *
 * Return: (EXIT_FAILURE) always
 */
int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't print, stack empty\n", line_number);
	return (EXIT_FAILUR);
}
/**
 * short_stack_error - prints monty math
 * @line_number: monty bytecodes
 * @op: operation
 *
 * Return: (EXIT_FAILURE) always
 */
int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILUR);
}
/**
 * div_error - prints division
 * @line_number: line num in monty
 *
 * Return: (EXIT_FAILURE) always
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILUR);
}
/**
 * pchar_error - prints pchar error
 * @line_number: monty bytecodes
 * @message: error message
 *
 * Return: (EXIT_FAILURE) always
 */
int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILUR);
}
