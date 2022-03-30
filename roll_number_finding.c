#include <stdio.h>

int main()
{
    int n;
    int alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    printf("Enter the no of students: ");
    scanf("%d", &n);

    printf("The roll numbers are: \n");
    for (int i = 0; i < n; i++)
    {
        int j = i % 26;
        printf("%c%d\n", alphabets[j], i / 26 + 1);
    }
    return 0;
}
