#include <stdio.h>
#include "lists.h"

/**
 * FrancoStart -  start before main func
 *
 * Return: void
 */
void FrancoStart(void) __attribute__ ((constructor));

void FrancoStart(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
