#include "main.h"
/**
 * main - prints the string "Holberton" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < strlen(c); i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
