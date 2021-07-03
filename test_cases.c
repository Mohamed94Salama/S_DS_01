#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "balancedParenthesis.h"
#include "types.h"

extern uint32_t top ;
//extern uint8_t expression[MAX];
extern uint32_t len;
extern uint8_t* arr_stack;

extern uint8_t test_stack_push;
extern uint8_t test_stack_pull;

void test_push_to_full_stack(void)
{
	create_full_stack();
	push(6);
	if(test_stack_push==0)
	{
		printf("Test case 1 passed\n");
	}else if(test_stack_push==1)
	{
		printf("Test case 1 failed");
	}
}

void test_push_to_not_full_stack(void)
{
	create_non_full_stack();
	push(6);
	if(test_stack_push==1)
	{
		printf("Test case 2 passed\n");
	}else if(test_stack_push==0)
	{
		printf("Test case 2 failed");
	}
}

void test_pull_from_empty_stack(void)
{
	create_empty_stack();
	uint8_t x=pull();
	if(test_stack_pull==0)
	{
		printf("Test case 3 passed\n");
	}else if(test_stack_pull==1)
	{
		printf("Test case 3 failed\n");
	}
}

void test_pull_from_non_empty_stack(void)
{
	create_full_stack();
	uint8_t x=pull();
	if(test_stack_pull==1)
	{
		printf("Test case 4 passed\n");
	}else if(test_stack_pull==0)
	{
		printf("Test case 4 failed\n");
	}
}

int main(void)
{
	test_push_to_full_stack();
	test_push_to_not_full_stack();
	test_pull_from_empty_stack();
	test_pull_from_non_empty_stack();
}