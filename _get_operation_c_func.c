#include "monty.h"
/**
 * get_opc - execute the corresponding function
 * @opc: the opcode that we are searching
 *
 * Return: pointer to the corresponding opcode or NULL
 */
void (*get_opc(char *opc))(stack_t **stack, unsigned int line_num)
{
instruction_t instruc[] = {
{"push", f_push},
{"pall", f_pall},
{"pint", f_pint},
{"pop", f_pop},
{NULL, NULL}
};
int i;
for (i = 0; instruc[i].opcode; i++)
{
if (strcmp(instruc[i].opcode, opc) == 0)
break;
}
return (instruc[i].f);
}
