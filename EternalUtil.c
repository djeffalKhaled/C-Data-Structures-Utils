#include <stdio.h>
#include <stdlib.h>
typedef char* string;
typedef struct node {
    int val;
    struct node* next;
} node;

string new(int size)
{
    string str = malloc(size * sizeof(string));
    return str;
}

int getSize()
{
    int size;
    scanf("%d", &size);
    return size;
}

node* FIFO(int size)
{
    node* head = NULL;
    node* p; node* prev; 
    for (int i = 0; i < size; i++)
    {
        p = malloc(sizeof(node));
        printf("give element %d: \n", i+1);
        scanf("%d", &p->val);
        if (head == NULL)
        {
            head = p;
            prev = p;
        }
        else {
            prev->next = p;
            prev = p;
        }
    }
    p->next = NULL;
    return head;
}

node* LIFO(int size)
{
    node* head = NULL;
    node* p;
    for (int i = 0; i < size; i++)
    {
        p = malloc(sizeof(node));
        printf("give element %d: \n", i+1);
        scanf("%d", &p->val);
        p->next = head;
        head = p;
    }
    return head;
}

void showList(node* head)
{
    node* p = head;
    while (p != NULL)
    {
        printf("%d\n", p->val);
        p = p->next;
    }
}


node* pile = NULL;

void createStack(node* head)
{
    pile = head;
}

node* updateStack()
{
    return pile;
}

void push(int val)
{
    node* p = malloc(sizeof(node));
    p->val = val;
    p->next = pile;
    pile = p;
}

void pop()
{   
    node* p = pile;
    pile = pile->next;
    free(p);
}   


