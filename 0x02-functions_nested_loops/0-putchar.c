#include <stdio.h>
/**
 * Write a program that prints _putchar
 * followed by a new line
 * Return: always 0 (success)
 */
int _putchar(char c);
int main(void)
{
	char message[] = "_putchar\n";
	int i = 0;

	while (message[i] != '\0')
	{
		_putchar(message[i]); i++;
	}

	return 0;
}
int _putchar(char c)
{
	return c;
}
