#include <stdlib.h>

/**
 * malloc_checked - allocate mem using malloc
 *@b: int
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
