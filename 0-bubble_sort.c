#include <stdio.h>
#include "sort.h"


/**
 * swap - swaps the values of two integers
 * @a: first int number
 * @b: second int number
 */
void swap(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: pointer to an array 
 * @size: the number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	int swp = 1;
	size_t i, x = size;

	while (swp == 1)
	{
		swp = 0;
		for (i = 1; i < x; i++)
		{
			if (array[i - 1] > array[i])
			{
				swap(&array[i - 1], &array[i]);
				swp = 1;
				print_array(array, size);
			}
		}
		x--;
	}

}
