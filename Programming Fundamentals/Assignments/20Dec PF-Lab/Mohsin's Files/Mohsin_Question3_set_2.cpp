#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, min_value = 1000000000, n, *ptr_array;
	printf("Enter the number of elements you want in the array\n");
	scanf("%d", &n);
	ptr_array = (int *)malloc(n * sizeof(int));

	printf("\nEnter the elements of the array below\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", ptr_array + i);
		if (*(ptr_array + i) < min_value)
		{
			min_value = *(ptr_array + i);
		}
	}
	printf("\nThe lowest value of all the elements you entered is :%d\n", min_value);
}
