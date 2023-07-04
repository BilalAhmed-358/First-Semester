#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, max = -9999, highest_2nd = -9999, n, *ptr_array;
	float sum;
	printf("Enter the number of students in class\n");
	scanf("%d", &n);
	ptr_array = (int *)malloc(n * sizeof(int));

	printf("Enter The marks of students below:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &*(ptr_array + i));
		sum += *(ptr_array + i);
		if (*(ptr_array + i) > max)
		{
			max = *(ptr_array + i);
		}
	}
	for (i = 0; i < n; i++)
	{
		if (*(ptr_array + i) > highest_2nd && *(ptr_array + i) < max)
		{
			highest_2nd = *(ptr_array + i);
		}
	}
	printf("\nThe maximum marks in the whole class are:%d\nThe 2nd highest marks in the whole class aer:%d\nThe average marks obtained by students are :%.3f\n", max,highest_2nd,sum / n);
}
