#include <stdio.h>

struct Node
{
    int data;
    struct Node *link;
};

void print_linked_list(struct Node *head);

int main()
{
    struct Node *head = NULL;

    struct Node n1, n2, n3;

    n1.data = 85;
    n1.link = NULL;

    n2.data = 12;
    n2.link = NULL;

    n1.link = &n2;

    n3.data = 35;
    n3.link = NULL;

    n2.link = &n3;

    head = &n1;

    print_linked_list(head);
    return 0;
}

void print_linked_list(struct Node *head)
{
    struct Node *temp = head;

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->link;
    }
}

/*
    1) understanding memory, malloc
    2) understanding of pointers
    3) data manipulation
*/
