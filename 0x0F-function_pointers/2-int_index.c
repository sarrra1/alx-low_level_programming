#include "function_pointers.h"

/**
 * int_index - return index place if true else -1
 * @array: an array
 * @size: size of elements in the array
 * @cmp: pointer to function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
        int sara;

        if (array == NULL || size <= 0 || cmp == NULL)
                return (-1);

        for (sara = 0; sara < size; sara++)
        {
                if (cmp(array[sara]))
                        return (sara);
        }
        return (-1);
}
