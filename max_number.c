#include <stdio.h>

int find_max(int array[], int length);

int main(void)
{
	int arr1[] = {20, 40, 32, 100, 34, 60, 29};
	int arr2[] = {2, 4, 5, 10, 9, 7, 8};
	int len1, len2, max1, max2, i;

	len1 = sizeof(arr1)/sizeof(int);
	len2 = sizeof(arr2)/sizeof(int);

	max1 = find_max(arr1, len1);
	max2 = find_max(arr2, len2);

	printf("Array 1\n");
	for (i = 0; i < len1; i++)
	{
		printf("%d ", arr1[i]);
	}
	putchar('\n');
	printf("Max: %d\n", max1);
	printf("------------------------\n");
	printf("Array 2\n");
	for (i = 0; i < len2; i++)
	{
		printf("%d ", arr2[i]);
	}
	putchar('\n');
	printf("Max: %d\n", max2);

	return (0);
}

int find_max(int array[], int length)
{
	int max;
	int i;
	
	max = array[0];

	for (i = 0; i < length; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}

	return (max);
}
