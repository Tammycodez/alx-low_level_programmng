#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that executes a given function
 * @array: array to iterate
 * @size: size of array
 * @action: pointer to function to call
 * Return: nothing if @array and @action is NULL
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
