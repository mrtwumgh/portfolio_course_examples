#include <stdio.h>

int find_min(int array[], int length);

int main(void)
{
	int arr1[] = {2, 3, 4, 3, 1, 10, 4, 2, 6, 11};
	int arr2[] = {3, 4, 10, 15, 3, 23};
	int len1, len2;
	int min1, min2;
	int i;

	len1 = sizeof(arr1)/ sizeof(int);
	len2 = sizeof(arr2)/ sizeof(int);

	min1 = find_min(arr1, len1);
	min2 = find_min(arr2, len2);
	printf("Array 1\n");
	for (i = 0; i < len1; i++)
	{
		printf("%d ", arr1[i]);
	}
	putchar('\n');
	printf("MIN1 = %d\n", min1);
	printf("----------------------\n");
	printf("Array 2\n");
	for (i = 0; i < len2; i++)
	{
		printf("%d ", arr2[i]);
	}
	putchar('\n');
	printf("MIN2 = %d\n", min2);

	return (0);
}

int find_min(int array[], int length)
{
	int min;
	int i;

	min = array[0];

	for (i = 0; i < length; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}

	return (min);
}
