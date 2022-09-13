#include "main.h"

/**
 * main - return 1 for lowercase and 0 for uppercase
 * Always return 0 (Success)
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
