#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: the number to be computed
 *
 * Return: the absolute value of the integer or zero
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (-c);
	}
}
