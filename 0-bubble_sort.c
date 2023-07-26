#include "sort.h"

/**
 * bubble_sort - sort array using bubble sort
 *
 * @array: the array to be sorted
 * @size: the lenght of the array;
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t tmp, i, j, sorted = 1,  swapped;

	if (!array || size < 1)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		swapped = 0;

		for (j = 0; j < size - sorted; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				swapped = 1;
			}
		}


		/* if no element were swapped, the array is sorted */
		if (!swapped)
		{
			break;
		}
		sorted++;
	}
}
