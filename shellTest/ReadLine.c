#include <stdio.h>
#include<stdlib.h>

int main()
{
	char *str;
	size_t size = 10, chars;

	str = malloc(size);

	if (str == NULL)
	{
		printf("Str is NULL");
		exit(98);
	}

	char **string_ptr = &str;

	if (string_ptr == NULL || size == 0)
	{
		printf("String is NULL");
		exit(99);
	}

	printf("$ ");
	chars = getline(string_ptr,&size,stdin);

	if (chars == -1)
		exit(100);

	printf("Number of chars %lu\n", chars - 1);
	printf("You typed = %s\n", str);
	return (0);
}
