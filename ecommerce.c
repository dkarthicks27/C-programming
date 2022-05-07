#include <stdio.h>
#include <string.h>

typedef struct Products
{
    int id;
    char name[100];
    float price;
    char Category[100];
} Product;

typedef struct Customers
{
    int id;
    char name[100];
    char password[100];
    char phone[11];
    char address[100];
    char gender;
    int age;
} Customer;

Product products[10] = {11234, "Macbook Air 2022", 949.12, "Electronics",
                        11237, "PlayStation 5 Gold", 1499.99, "Gaming",
                        10934, "Nike Air Jordans", 499, "Sports"};

Customer customers[10] = {1, "Raghav", "password", "9843212345", "3/98, North street, East London", 'M', 34,
                          2, "Janvi", "password", "9843212343", "5/98, North street, East London", 'F', 29,
                          3, "Peter", "password", "9843212344", "4/98, North street, East London", 'M', 90};

int login();
int validate_username(char[100]);
int validate_password(char[100]);
int product_search();
float make_purchase();
float calculate_amount(int product_id, int qty);
void checkout(float);

int main()
{
    /*
        1) login page
        2) products searching
        3) buy
        4) cart addition
        5) checkout
    */

    if (login())
    {
        float purchased = make_purchase();
        checkout(purchased);
    }
    return 0;
}

void checkout(float purchased)
{
    printf("Thank you for shopping with us...\nYour total bill amount is %f\n\n", purchased);
}

float make_purchase()
{
    /*
        1) show a catalog of items
        2) customer chooses a product and quantity
        3) add it to total
        4) repeat 1 until customer wants to stop
    */
    int total = 0;

    while (1)
    {
        int product_id;
        int qty;
        int status;
        product_id = product_search();
        printf("Enter the quantity of items you want to buy..\n");
        scanf("%d", &qty);

        total += calculate_amount(product_id, qty);
        printf("enter 1 to continue purchasing, else you will to be taken to checkout...");
        scanf("%d", &status);
        if (status != 1)
        {
            return total;
        }
    }
}

int product_search()
{
    int product_id = 0;
    printf("Welcome to purchase page of Ekart.com :)\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("id: %d, product_name: %s, price: %f\n", products[i].id, products[i].name, products[i].price);
    }

    printf("Enter the id of the product you want to buy: ");
    scanf("%d", &product_id);
    return product_id;
}

float calculate_amount(product_id, qty)
{
    for (int i = 0; i < 10; i++)
    {
        if (product_id == products[i].id)
        {
            return products[i].price * qty;
        }
    }
    printf("product not found\n");
    return 0;
}

int login()
{
    char username[100];
    char password[100];
    int tries = 0;
    printf("Welcome to Ecart.com!!!\n");

    printf("Enter your username: ");
    scanf("%s", username);
    if (validate_username(username) == 0)
    {
        printf("sorry we couldnt find your name\n");
        return 0;
    }

    while (tries < 4)
    {
        printf("Enter your password: ");
        scanf("%s", password);
        if (validate_password(password) == 0)
        {
            printf("invalid password!! Try again\n");
            tries += 1;
        }
        else
        {
            printf("Welcome %s\n", username);
            return 1;
        }
    }
    return 0;
}

int validate_username(char username[100])
{
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(username, customers[i].name) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int validate_password(char password[100])
{
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(password, customers[i].password) == 0)
        {
            return 1;
        }
    }
    return 0;
}