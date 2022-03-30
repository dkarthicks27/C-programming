#include <stdio.h>

int main()
{
	int size_of_array;
	printf("Enter the size of the array: ");
	scanf("%d", &size_of_array);

	int array[size_of_array]; //variable size of array

	for (int i = 0; i < size_of_array; i++)
	{
		printf("Enter the element no. %d: ", i + 1);
		scanf("%d", &array[i]); // scanning each element
	}

	printf("\narray is : \n");
	for (int i = 0; i < size_of_array; i++)
	{
		printf("%d,\t", array[i]);
	}

	// int new_array[size_of_array];

	// 5 elements, (0, 1, 2, 3) ---> (val(4), val(3), val(2), val(1), val(0))
	// 0  --> 4
	// 1 ---> 3
	// 2 ---> 2
	// 3 ---> 1
	// 4 ---> 0
	// normal method
	// for (int i = 0; i < size_of_array; i++)
	// {
	// 	new_array[i] = array[size_of_array - 1 - i];
	// }

	// swap method

	for (int i = 0; i < size_of_array / 2; i++)
	{
		// printf("the value of array[%d] is: %d, array[%d] is: %d\n", i, array[i], size_of_array - 1 - i, array[size_of_array - 1 - i]);
		int temp = array[i];
	}

	// reversed array is :
	printf("\nreversed array is : \n");
	for (int i = 0; i < size_of_array; i++)
	{
		printf("%d,\t", array[i]);
	}
	return 0;
}

// loops and conditionals




