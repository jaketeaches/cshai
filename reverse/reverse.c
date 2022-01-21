#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// cannot return arrays
int *sorted(int *unsorted_arr, int arr_len)
{
    // calculate size in bytes
    int arr_size = arr_len * sizeof(unsorted_arr[0]);
    // allocated bytes in the heap
    int *sorted_arr = malloc(arr_size);
    // copy bytes from unsorted to sorted
    memcpy(sorted_arr, unsorted_arr, arr_size);

    // declare once, set value many times
    int swaps;
    // do-while is a while loop that checks the condition *after* the first
    // iteration
    do
    {
        swaps = 0;

        // start from one because we're doing a 2-wide sliding window
        for (int b = 1; b < arr_len; b++)
        {
            int a = b - 1;
            if (sorted_arr[a] > sorted_arr[b])
            {
                // swap values
                int a_value   = sorted_arr[a];
                sorted_arr[a] = sorted_arr[b];
                sorted_arr[b] = a_value;

                swaps++;
            }
        }
        // array is sorted when no swaps were made
    } while (swaps > 0);

    return sorted_arr;
}

void printa(int *array, int nums_len)
{
    printf("[");
    for (int i = 0; i < nums_len; i++)
    {
        printf("%d", array[i]);
        if (i != nums_len - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}

int main()
{
    int nums[] = {
        52, 88, 23, 71, 34, 88, 75, 57, 46, 72,  68, 55, 65,  22, 97, 53, 33,
        38, 76, 29, 30, 5,  82, 69, 96, 87, 93,  41, 64, 79,  47, 98, 84, 22,
        83, 62, 9,  57, 46, 42, 60, 7,  28, 95,  69, 68, 86,  28, 19, 76, 60,
        97, 71, 24, 80, 12, 78, 18, 39, 99, 100, 26, 79, 91,  15, 80, 20, 78,
        68, 78, 22, 33, 90, 28, 70, 57, 49, 20,  48, 35, 100, 55, 63, 32, 57,
        81, 66, 21, 93, 18, 51, 13, 11, 24, 50,  78, 34, 88,  10, 41,
    };
    int nums_len = 50;

    printf("unsorted:\n");
    printa(nums, nums_len);
    printf("sorted:\n");
    printa(sorted(nums, nums_len), nums_len);

    return 0;
}
