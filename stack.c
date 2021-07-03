#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"

uint32_t top = -1;

uint8_t expression[MAX];
uint32_t len;

uint8_t* arr_stack;

void create_stack(void)
{
	printf("Enter an expression : ");
	scanf("%s",expression);
	len = strlen(expression);
	arr_stack=(uint8_t*)malloc(len*sizeof(uint8_t));
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
