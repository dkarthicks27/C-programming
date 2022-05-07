#include <stdio.h>
#include <string.h>

struct Car
{
    char color[50];
    char type[50];
    char brand[100];
    char model[100];
    int rating;
    int count = 0;
};

struct Car cars[100];
int n;

int linear_search(char[], char[]);

int main()
{

    printf("Enter the number of users: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char color[50];
        char type[50];
        char brand[100];
        char model[100];
        int rating;
        int count;
        int idx;
        printf("Enter your car color: ");
        scanf("%s", color);
        printf("Enter your car type: \n");
        scanf("%s", type);
        printf("Enter your car brand: \n");
        scanf("%s", brand);
        printf("Enter your car model: \n");
        scanf("%s", model);
        printf("Enter your car rating: \n");
        scanf("%s", rating);

        if (i == 0)
        {
            strcpy(cars[i].color, color);
            strcpy(cars[i].type, type);
            strcpy(cars[i].brand, brand);
            strcpy(cars[i].model, model);
            cars[i].rating = rating;
        }
        else
        {
            idx = linear_search(brand, model);
            if (idx >= 0)
            {
                cars[idx].rating += rating;
                cars[idx].count += 1;
            }
            else
            {
                strcpy(cars[i].color, color);
                strcpy(cars[i].type, type);
                strcpy(cars[i].brand, brand);
                strcpy(cars[i].model, model);
                cars[i].rating = rating;
            }
        }
    }
    return 0;
}

int linear_search(char brand[], char model[])
{
    for (i = 0; i < lenght_of_struct; i++)
    {
        if (strcmp(cars[i].brand, brand) == 0 && (strcmp(cars[i].model, model)) == 0)
        {
            return i;
        }
    }
    return -100;
}