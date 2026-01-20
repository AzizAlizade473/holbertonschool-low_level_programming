#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterates array elements
 * @array: name of the array
 * @size: size of the array
 * @action: function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
        if(array==NULL || size == NULL || action==NULL)
                return;
        int i;
        for(i=0;i<size;i++)
        {
                action(array[i]);
        }
}
