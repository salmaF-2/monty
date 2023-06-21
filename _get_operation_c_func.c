#include "monty.h"
/**
 * get_operation_c_func - execute the corresponding function
 * @operation_code: the opcode that we are searching
 * Return: pointer to the corresponding opcode or NULL
 */
void (*get_operation_c_func(char *operation_code))(**stack, unsigned int line_num)
{
instruction_t instruc[] = {
    {"push", push},
    {"pall", pall},
    {NULL, NULL}
};
int i = 0;
while (instruc[i].operation_code != NULL)
{
if (strcmp(instruc[i].operation_code, operation_code) == 0)
return (instruc[i].f);
i++;
}
return (NULL);
}
