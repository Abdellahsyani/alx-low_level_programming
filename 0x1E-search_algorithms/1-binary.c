#include "search_algos.h"

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

