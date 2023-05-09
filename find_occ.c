#include <stdio.h>

int find_occ(int array[], int to_find, int length);

/**
  * main - entry point into code
  *
  * Return: 0 success always
  */

int main(void)
{
	int arr1[] = {23, 3, 45, 5, 6, 45, 5, 3, 3, 5};
	int arr2[] = {100, 500, 200, 100, 50, 100, 200, 500};
	int len1, len2, i, occ1, occ2;
	int num1 = 5;
	int num2 = 50;

	len1 = sizeof(arr1)/sizeof(int);
	len2 = sizeof(arr1)/sizeof(int);
	
	occ1 = find_occ(arr1, num1, len1);
	occ2 = find_occ(arr2, num2, len2);

	printf("Array 1\n");
	for (i = 0; i < len1; i++)
	{
		printf("%d ", arr1[i]);
	}
	putchar('\n');
	printf("%d occurs %d times in the array\n", num1, occ1);
	printf("--------------------------\n");
	printf("Array 2\n");
	for (i = 0; i < len2; i++)
	{
		printf("%d ", arr2[i]);
	}
	putchar('\n');
	printf("%d occures %d times in the array\n", num2, occ2);

	return (0);
}

/**
  * find_occ - find the occurence of a value in an array
  * @array: array to be processed
  * @to_find: value to be found
  * @length: length of the array
  *
  * Return: the length of the array
  */

int find_occ(int array[], int to_find, int length)
{
	int i;
	int count = 0;

	for (i = 0; i < length; i++)
	{
		if (array[i] == to_find)
		{
			count++;
		}
	}

	return (count);
}
