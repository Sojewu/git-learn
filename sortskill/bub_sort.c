#include "sort.h"

void bub_sort(int *arr, int len)
{
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
    {
        int flag = 0;
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = 1;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}