#include <stdio.h>

int array[100];
int n;

void append_array();
void remove_array();

int main()
{
    int choice;
    printf("Enter the no of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter 1 for adding more elements, 2 for removing one element: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        append_array();
    }
    if (choice == 2)
    {
        remove_array();
    }

    printf("the array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    return 0;
}

void append_array()
{
    int ele;
    printf("enter the element to add: ");
    scanf("%d", &ele);
    if (n < 100)
    {
        array[n] = ele;
    }
    n += 1;
}

void remove_array()
{
    int ele;
    printf("enter the element to remove: ");
    scanf("%d", &ele);
    int break_point = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] == ele)
        {
            break_point = 1;
        }
        if (break_point == 1)
        {
            array[i] = array[i + 1];
        }
    }

    n -= 1;
}
