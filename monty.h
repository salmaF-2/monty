#ifndef MONTY_H
#define MONTY_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>
#define UNUSED(x) (void)(x)
#define _POSIX_C_SOURCE 200809L
extern char *global_data;
/* Data structures */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/*opcode*/
void f_pall(stack_t **stack, unsigned int line_num);
void f_push(stack_t **stack, unsigned int line_num);

/* other functions */
void (*get_operation_c_func(char *opcode))(stack_t **stack, unsigned int line_num);
int main(int argc, char *argv[]);
void process_l(stack_t **stack, char *line, unsigned int line_num);
void read_monty_f(const char *file);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
#endif
