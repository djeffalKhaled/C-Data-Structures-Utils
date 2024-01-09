#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "linkedLists.h"
#include "stack.h"
#include "queue.h"

void stackTesting() {
    node* stack = newStack();

    for (int i = 1; i <= 100; i++) 
    {
        push(&stack, i);
    }
    printList(stack);
    int x;
    node* reverse = newStack();
    while (!stackEmpty(stack)) {
        x = pop(&stack);
        push(&reverse, x);
    }
    printList(reverse);
}

int main() {

    stackTesting();
    Queue queue = newQueue();
    enqueue(&queue, 100);
    enqueue(&queue, 200);
    enqueue(&queue, 300);
    enqueue(&queue, 400);

    dequeue(&queue);

    printList(queue.head);

    return 0;
}

