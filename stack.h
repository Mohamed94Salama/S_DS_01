#ifndef _STACK_H_
#define _STACK_H_

#include "types.h"

#define MAX	100

void create_stack(void);
void push(uint8_t u8_data);
uint8_t pull(void);
void printStack(void);

#endif