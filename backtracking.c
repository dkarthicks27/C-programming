#include <stdio.h>

// int main()
// {
//     int array1[10][10] = {0};
//     int array2[1][5] = {1, 2, 3, 4, 5};
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             printf("%d\t", array1[i][j]);
//         }
//         printf("\n");
//     }
//     memcpy(array1[0], array2[0], 1 * 5 * sizeof(int));
//     printf("------------after-------------\n\n");
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             printf("%d\t", array1[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

int result[1000][1000];
int target_sum = 9;
int recursive_function(int array[], int curr_combination[], int total, int current_index);

#define SIZE_ARRAY ;
int main()
{
}

int recursive_function(int array[], int curr_combination[], int total, int current_index)
{
    if (total == target_sum)
    {
        append(&result, curr_combination);
        return;
    }
    if (total > target_sum)
    {
        return;
    }

    for (int i = current_index; i < SIZE_ARRAY; i++)
    {
        append(&curr_combination, array[i]);
        total += array[i];
        recursive_function(array, curr_combination, total, i);
        pop(&curr_combination, array[i]);
        total -= array[i];
    }
}