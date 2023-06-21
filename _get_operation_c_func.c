#include "monty.h"
/**
 * get_operation_c_func - execute the corresponding function
 * @opcode: the opcode that we are searching
 * Return: pointer to the corresponding opcode or NULL
 */
void (*get_operation_c_func(char *opcode))(stack_t **stack, unsigned int line_num)
{
instruction_t instruc[] = {
	{"push", f_push},
        {"pall", f_pall},
        {NULL, NULL}
};
int i;
for (i = 0; instruc[i].opcode; i++)
{
if (strcmp(instruc[i].opcode, opcode) == 0)
break;
}
return (instruc[i].f);
}
