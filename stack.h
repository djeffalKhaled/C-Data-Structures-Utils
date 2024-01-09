#ifndef STACK_HEADER_H
#define STACK_HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int getSize() {
    printf("give size of list: ");
    int x;
    scanf("%d", &x);
    printf("\n");
    return x;
}

node* newStack() {
    return NULL;
}

int peek(node* stack) {
    return stack->val;
}

bool stackEmpty(node* stack) {
    if (stack == NULL) {
        return true;
    }
    return false;
}

void push(node** stack, int val) {
    node* p = (node*)malloc(sizeof(node));
    if (p == NULL) {
        printf("memory allocation failed at push\n");
        return;
    }
    p->val = val;
    p->next = *stack;
    *stack = p;
}

int pop(node** stack) {
    node* p = *stack;
    *stack = (*stack)->next;
    int val = p->val;
    free(p);
    return val;
}

#endif // STACK_HEADER_H