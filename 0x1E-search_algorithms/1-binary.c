#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a binary
 * search algorithm, not guaranteed to return lowest index if `value` appears
 * twice in `array`
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value) {
    
	int left = 0;
	int right = size - 1;
	int i;

	if (array == NULL) {
        return (-1);
    }

    while (left <= right) {
        int mid = left + (right - left) / 2;

        printf("Searching in array[%d:%d] = {", left, right);
        for (i = left; i <= right; i++) {
            printf("%d", array[i]);
            if (i != right) {
                printf(", ");
            }
        }
        printf("}\n");

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return (-1);
}
