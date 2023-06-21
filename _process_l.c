#include "monty.h"
/**
 * process_l - Process line of code
 * @stack: pointer to pointer to the top of stack
 * @line: line of monty code
 * @line_num: number of the current line
 */
void process_line(stack_t **stack, char *line, unsigned int line_num)
{
char *operation_code;
void (*function)(stack_t **stack, unsigned int line_num);
operation_code = strtok(line, " \t\n");
if (operation_code == NULL || operation_code[0] == '#')
return;
function = get_operation_c_func(operation_code);
if (function == NULL)
{
fprintf(stderr, "L%u: unknown instruction %s\n", line_num, operation_code);
exit(EXIT_FAILURE);
}
function(stack, line_num);
}
