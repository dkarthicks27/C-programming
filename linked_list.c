#include <stdio.h>

struct Node
{
    int data;
    struct Node *link;
};

void print_linked_list(struct Node *head);

void add_node(struct Node *head, struct Node *new_node);

void remove_node(struct Node *head);

void add_node_at_i(struct Node *head, struct Node *new_node, int i);

int main()
{
    struct Node *head = NULL;

    struct Node n1, n2, n3, n4, n5;

    n1.data = 85;
    n1.link = NULL;

    n2.data = 12;
    n2.link = NULL;

    n1.link = &n2;

    n3.data = 35;
    n3.link = NULL;

    n2.link = &n3;

    head = &n1;

    n4.data = 10;
    n4.link = NULL;

    add_node(head, &n4);
    printf("after adding 4th node \n");
    print_linked_list(head);

    remove_node(head);
    printf("after removing 4th node \n");
    print_linked_list(head);

    n5.data = 15;
    n5.link = NULL;

    add_node_at_i(head, &n5, 10);
    printf("after adding node to 2nd index \n");
    print_linked_list(head);
    return 0;
}

void print_linked_list(struct Node *head)
{
    struct Node *temp = head;

    while (temp != NULL)
    {
        printf("%d\n\n", temp->data);
        temp = temp->link;
    }
}

void add_node(struct Node *head, struct Node *new_node)
{
    struct Node *temp = head;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = new_node;
    // we want temp to be the tail node
}

void remove_node(struct Node *head)
{
    // remove the last node, popping, pushing
    struct Node *temp = head;
    while (temp->link->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = NULL;
}

void add_node_at_i(struct Node *head, struct Node *new_node, int x)
{
    int i = 0;
    // it loops from 0 till x

    struct Node *temp = head;
    while (temp != NULL)
    {
        if (i == x - 1)
        {
            break;
        }
        i += 1;
        temp = temp->link;
    }

    if (temp != NULL)
    {
        new_node->link = temp->link;
        temp->link = new_node;
    }
    else
    {
        temp->link = new_node;
    }
}

/*
    1) understanding memory, malloc
    2) understanding of pointers
    3) data manipulation
*/
