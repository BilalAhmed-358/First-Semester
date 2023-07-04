#include <stdio.h>
#include <conio.h>
#include <string.h>

bool BS(int a[], int key, int begin, int end)
{
	int mid = (begin + end) / 2;
	if (a[mid] == key)
		return true;
	else
	{
		if (end <= begin)
			return false;
		else
		{
			if (a[mid] > key)
				return BS(a, key, begin, mid - 1);
			else
				return BS(a, key, mid + 1, end);
		}
	}
}

int main()
{
	int begin, end, key, i, j, temp,n;
	printf("How many elements in the array?\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements below\n");
	for (i = 0; i < n; i++)
	{
		
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		for (j = i+1; j <n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Enter the key you want to find\n");
	scanf("%d", &key);
	begin = arr[0];
	end = arr[19];
	if (BS(arr, key, begin, end) == 1)
		printf("found\n");
	else
	{
		printf("not found\n");
	}
}
