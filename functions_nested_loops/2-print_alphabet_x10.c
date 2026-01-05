#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char l;
    for(int i =0;i<10;i++) {
        for (l = 'a'; l <= 'z'; l++)
        	{
        		_putchar(l);
        	}
        _putchar('\n');
    }
	
}
