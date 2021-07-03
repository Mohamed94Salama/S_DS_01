#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"
#include "balancedParenthesis.h"

extern uint8_t expression[MAX];
extern uint32_t top;
extern uint32_t len;
extern uint8_t* arr_stack;

uint8_t* balancedParentheses(uint8_t* expression)
{
	uint8_t x;
	uint8_t* result;
	uint32_t i;
	for(i=0;i<len;i++)
	{
		if((expression[i]=='{')||(expression[i]=='('))
			{
				push(expression[i]);
				continue;
			}
		if((expression[i]=='}')||(expression[i]==')'))
		{
			if(expression[i]=='}')
			{
				if(arr_stack[top]=='{')
					{
						x=pull();
					}else
					{
						result="Not balanced";
						break;
					}
			}
			if(expression[i]==')')
			{
				if(arr_stack[top]=='(')
					{
						x=pull();
					}else
					{
						result="Not balanced";
						break;
					}
			}
		}
	}
	if(top==-1)
	{
		result="Balanced";
	}
	return result;
}