#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: the input
 */
int main(void)
{
	char *buffer = NULL;
	size_t n = 0;

	printf("$ ");
	getline(&buffer, &n, stdin);
	printf("%s\n", buffer);

	return (0);
}

