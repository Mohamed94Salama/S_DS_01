#ifndef _STACK_H_
#define _STACK_H_

#include "types.h"

#define MAX	100

void create_stack(void);
void push(uint8_t u8_data);
uint8_t pull(void);
void printStack(void);
void create_full_stack(void);
void create_non_full_stack(void);
void create_empty_stack(void);

#define E_STACK_FULL 0
#define E_VALID 1
#define E_STACK_EMPTY 2

#endif