#include <stdio.h>
#include "types.h"
#include "stack.h"
#include "balancedParenthesis.h"

extern uint8_t expression[MAX];

int main(void)
{
	create_stack();
	uint8_t* str;
	str=balancedParentheses(expression);
	printf("%s",str);
	return 0;
}