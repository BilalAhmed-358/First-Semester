#include <stdio.h>
int pivotpositioner(int arr[], int low, int high)
{
    int pivot = arr[low], i = low + 1, temp;
    int j = high;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    if (arr[j] < pivot)
    {
        temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
    }
    return j;
}
void quicksort(int arr[], int start, int end)
{
    int pivotposition;
    if (start < end)

    {
        pivotposition = pivotpositioner(arr, start, end);

        quicksort(arr, start, pivotposition - 1);
        quicksort(arr, pivotposition + 1, end);
    }
}
int main()
{
    int n,i;
    printf("How many values do you want in your array?\n");
        scanf("%d", &n); int arr[n];
    printf("Enter the values of in the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array before quick sorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    quicksort(arr, 0, n - 1);
    printf("\nArray after quick sorting\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
