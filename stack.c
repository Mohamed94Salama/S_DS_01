#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"

uint32_t top = -1;

uint8_t expression[MAX];
uint32_t len;

uint8_t* arr_stack;
uint8_t test_stack_push;
uint8_t test_stack_pull;

void create_empty_stack(void)
{
	top=-1;
	len=5;
	arr_stack=(uint8_t*)malloc(len*sizeof(uint8_t));
}

void create_full_stack(void)
{
	top=4;
	len=5;
	arr_stack=(uint8_t*)malloc(len*sizeof(uint8_t));
	for(uint32_t i=0;i<len;i++)
	{
		arr_stack[i]=i;
	}
}

void create_non_full_stack(void)
{
	top=3;
	len=5;
	arr_stack=(uint8_t*)malloc(len*sizeof(uint8_t));
	for(uint32_t i=0;i<len-1;i++)
	{
		arr_stack[i]=i;
	}
}

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
		printf("Stack is full\n");
		test_stack_push=0;
	}else
	{
		top++;
		arr_stack[top]=u8_data;
		test_stack_push=1;
	}
}

uint8_t pull(void)
{
	uint8_t x;
	if(top==-1)
	{
		printf("Stack is empty\n");
		test_stack_pull=0;
	}else
	{
		x=arr_stack[top];
		top--;
		test_stack_pull=1;
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
