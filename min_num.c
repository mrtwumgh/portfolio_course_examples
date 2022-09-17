#include <stdio.h>

int find_min(int array[], int length);

int main(void)
{
	int myarray1[] = {5,9,10,11,4,1,8,0,7};
	int myarray2[] = {2,3,4,7,2,6,0};

	int min1 = find_min(myarray1, 9);
	int min2 = find_min(myarray1, 7);

	printf("min1: %d\n", min1);
	printf("min2: %d\n", min2);
}
	
	
int find_min(int array[], int length)	
{	
	int min;

	min = array[0];
	
	for (int i = 0; i < length; i++)
	{
		if (array[i] < min) 
		{	
			min = array[i];
		}
	}

	return min;
}
