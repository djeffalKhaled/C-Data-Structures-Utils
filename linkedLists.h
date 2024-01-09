#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

node* appendList(node* head, int val) {
    node* p = malloc(sizeof(node));
    p->val = val;
    p->next = NULL;
    if (head == NULL)
    {
        return p;
    }
    else {
        node* p1 = head;
        while (p1->next != NULL)
        {
            p1 = p1->next;
        }
        p1->next = p;
        return head;
    }
}

node* FIFO_Fill(int size) {
    node* head = NULL;
    node* p; node* prev; 
    for (int i = 0; i < size; i++)
    {
        p = (node*)malloc(sizeof(node));
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

node* LIFO_Fill(int size) {
    node* head = NULL;
    node* p;
    for (int i = 0; i < size; i++)
    {
        p = (node*)malloc(sizeof(node));
        printf("give element %d: \n", i+1);
        scanf("%d", &p->val);
        p->next = head;
        head = p;
    }
    return head;
}

node* deleteElementList(int val, node* head) {
    node* p = head;
    node* prev = p;
    if (head == NULL)
    {
        return NULL;
    }
    else if (p->val == val)
    {
        head = head->next;
        free(p);
        return head;
    }
    else {
        while (p->val != val)
        {
            prev = p;
            p = p->next;
        }
        prev->next = p->next;
        free(p);
        return head;
    }
}

void printList(node* stack) {
    printf("result: ");
    node* p = stack;
    while (p != NULL) {
        printf("%d -> ", p->val);
        p = p->next;
    }
    printf("NULL\n");
}

#endif // LINKED_LISTS_H