#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, column, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			/* Print spaces: size - current row number */
			for (spaces = size - row; spaces > 0; spaces--)
			{
				_putchar(' ');
			}
			/* Print hashes: equal to current row number */
			for (column = 1; column <= row; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
