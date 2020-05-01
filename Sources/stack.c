#include <stdio.h>

/* Include it's own prototypes. This is good practice. */
#include "stack.h"


/*************************************************************************/

#define MAX_SIZE 4

struct Stack {
	int buffer[MAX_SIZE];
	int p;
}mystack;


void initStack(void)
{
	mystack.p = -1;
}

/*************************************************************************/

int pushOntoStack(int number)
{
	int retval = -1;
	if(mystack.p < MAX_SIZE-1) {
		mystack.p++;
		mystack.buffer[mystack.p] = number;
		retval = 0;
	}
	return retval;
}

/*************************************************************************/

int popFromStack(void)
{
	int retval;
	if(mystack.p >= 0) {
		retval = mystack.buffer[mystack.p];
		mystack.p--;
	}
	return retval;
}

/*************************************************************************/

stackState_t isStackEmpty(void)
{
	stackState_t state = NotEmpty;
	if(mystack.p <= -1) state = Empty;
    else if(mystack.p == MAX_SIZE-1) state = Full;
	return state;
}
