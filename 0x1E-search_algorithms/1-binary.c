#include "search_algos.h"

/**
 * print_array - this is to print array
 * @array: this is the array that we want to print
 * @size: the size of the array
 */
void print_array(int *array, size_t size) {
	size_t i;
    printf("Searching in array:");
    for (i = 0; i < size; i++) {
        printf(" %d", array[i]);
        if (i < size - 1) {
            printf(",");
        }
    }
    printf("\n");
}

/**
 * binary_search - the function that use binary search
 * @array: the array that store elements
 * @size: the size of the array
 * @value: the value that we looking for
 *
 * Return: -1 if fail and value if success
 */

int binary_search(int *array, size_t size, int value) {
    size_t i, L, R, m;
    if (array == NULL || size == 0)
        return (-1);

    R = size - 1;
    L = 0;

    print_array(array, size);

    while (L <= R) {
        m = L + (R - L) / 2;
        printf("Searching in array:");
        for (i = L; i <= R; i++) {
            printf(" %d", array[i]);
            if (i < R) {
                printf(",");
            }
        }
        printf("\n");

        if (array[m] < value)
            L = m + 1;
        else if (array[m] > value)
            R = m - 1;
        else
            return (m);
    }
    return (-1);
}

