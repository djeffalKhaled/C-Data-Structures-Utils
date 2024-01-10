#ifndef DOUBLY_LINKED_LISTS_H
#define DOUBLY_LINKED_LISTS_H

#include<stdio.h>
#include<stdlib.h>

typedef struct DoubleNode {
    int val;
    struct DoubleNode *next;
    struct DoubleNode *prev;
} DoubleNode;


void FIFO_FillDouble(DoubleNode **head, DoubleNode **tail, int size) {
    *head = NULL;
    *tail = NULL;
    for (int i = 0; i < size; i++) {
        DoubleNode* p = (DoubleNode*)malloc(sizeof(DoubleNode));
        if (p == NULL) {
            printf("memory allocation failed at FIFO_FillDouble\n");
            return;
        }
        printf("give element %d: ", i+1);
        scanf("%d", &p->val);
        printf("\n");
        if (*head == NULL) {
            *head = p;
            *tail = p;
            p->prev = NULL;
            p->next = NULL;
        }
        else {
            (*tail)->next = p;
            p->prev = *tail;
            *tail = p;
            p->next = NULL;
        }
    }
}

void printDoubleList(DoubleNode* head) {
    DoubleNode* p = head;
    while (p != NULL) {
        printf("%d <-> ", p->val);
        p = p->next;
    }
    printf("NULL\n");
}
void printReverseDoubleList(DoubleNode* tail) {
    DoubleNode* p = tail;
    while (p != NULL) {
        printf("%d <-> ", p->val);
        p = p->prev;
    }
    printf("NULL\n");
}

#endif // DOUBLE_LINKED_LISTS_H