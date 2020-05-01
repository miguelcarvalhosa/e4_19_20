/**
 * \file stack.h
 *
 * Module for implementing a stack.
 *
 */

#ifndef stack_h
#define stack_h


/*
 * stackState_t
 *
 * Possible values for the stack state
 */
typedef enum { Empty, NotEmpty, Full } stackState_t;

/*
 * initStack
 *
 * Initialises stack, guaranteeing that it is empty.
 */
void initStack(void);

/*
 * pushOntoStack
 *
 * Writes the value passed as argument in the top of the stack.
 */
int pushOntoStack(int number);

/*
 * popFromStack
 *
 * Returns the value that is on top of the stack.
 */
int popFromStack(void);

/*
 * isStackEmpty
 *
 * Tests if stack is empty.
 */
stackState_t isStackEmpty(void);

#endif
