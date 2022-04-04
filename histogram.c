#include <stdio.h>
#define SIZE 40

int main()
{
	int response[] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
					  1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
					  5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

	int frequency[11] = {0};

	// [0, 1, 1, 0, 1, 1, 1, 1, 2, 1, 0]

	//  0  1  2  3  4  5  6  7  8  9  10
	
	for (int i = 0; i < SIZE; i++)
	{
		frequency[response[i]]++;
	}

	for (int i = 1; i < 11; i++)
	{
		printf("%d --> %d\n", i, frequency[i]);
	}

	// for (int i = 1; i < 11; i++)
	// {
	// 	int count = 0;
	// 	for (int j = 0; j < SIZE; j++)
	// 	{
	// 		if (i == response[j])
	// 		{
	// 			count++;
	// 		}
	// 	}
	// 	printf("%d ---> %d\n", i, count);
	// }

	// time complexity --> N * M = quadratic equation (square) (n2)
	// space complexity -->
}
