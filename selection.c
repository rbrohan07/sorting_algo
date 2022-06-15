#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printarray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}


///don't change it BC    its required for all
void selection_sort(int arr[], int len)
{
    int index_of_min, i, j;
    for (i = 0; i < len - 1; i++)
    {
        index_of_min = i;
        for (j = i + 1; j < len; j++)
        {
            if (arr[index_of_min] > arr[j])
            {
                
                index_of_min = j;
            }
        }
        swap(&arr[i], &arr[index_of_min]);
    }
    printarray(arr,len);
}

int main()
{
    int arr[] = {20, 10, 30, 40, 5, 0, 60, 70, 80};
    // printf("   555   ");
    // swap(&arr[0], &arr[1]);
    printarray(arr, 9);
    printf("\n");
    selection_sort(arr,9);

    
    return 0;
}