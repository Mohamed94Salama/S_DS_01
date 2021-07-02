#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "types.h"

#define MAX	100

void push(uint8_t u8_data);
uint8_t pull(void);
void printStack(void);
uint8_t* balancedParentheses(uint8_t* expression);

uint32_t top = -1;

uint8_t expression[MAX];
uint32_t len;

uint8_t* arr_stack;

int main(void)
{
	printf("Enter an expression : ");
	scanf("%s",expression);
	len = strlen(expression);
	arr_stack=(uint8_t*)malloc(len*sizeof(uint8_t));
	uint8_t* str;
	str=balancedParentheses(expression);
	printf("%s",str);
	return 0;
}

void push(uint8_t u8_data)
{
	if(top==len-1)
	{
		printf("Stack is full");
	}else
	{
		top++;
		arr_stack[top]=u8_data;
	}
}

uint8_t pull(void)
{
	uint8_t x;
	if(top==-1)
	{
		printf("Stack is empty");
	}else
	{
		x=arr_stack[top];
		top--;
	}
	return x;
}

void printStack(void)
{
	for(uint32_t i=0;i<top+1;i++)
	{
		printf("%c\n",arr_stack[i]);
	}
}

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