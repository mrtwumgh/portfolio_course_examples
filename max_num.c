#include <stdio.h>

int find_max(int array[], int length);

int main(void)
{
	int myarray1[] = {8,3,4,5,9,7,4,2,10};
	int myarray2[] = {2,3,4,10,11,2,8};
	
	int max1 = find_max(myarray1, 9);
	int max2 = find_max(myarray2, 7);
	
	printf("max: %d\n", max1);
	printf("max: %d\n", max2);

	return 0;
}
int find_max(int array[], int length)
{	
	int max = array[0];

	for (int i = 0; i < length; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}
