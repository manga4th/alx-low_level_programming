#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *mg = "programme";

	while (*mg)
	{
		_putchar(*mg);
		mg++;
	}
	_putchar('\n');

	return (0);
}
