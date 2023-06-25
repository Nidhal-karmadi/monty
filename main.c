#include <stdio.h>
#include "monty.h"

int main(void)
{
	stack_t *stack = NULL;

		/*** ... Code for reading and parsing Monty byte code file***/

		/*** Example usage of push and pall***/
	push(&stack, 10);
	push(&stack, 20);
	pall(&stack);

	return 0;
}

