#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

typedef struct Queue {
    node* head;
    node* tail;
} Queue;

Queue newQueue() {
    Queue queue;
    queue.head = NULL;
    queue.tail = NULL;
    return queue;
}

bool queueEmpty(Queue queue) {
    if (queue.head == NULL) {
        return true;
    }
    return false;
}

void enqueue(Queue* queue, int val) {
    node* p = (node*)malloc(sizeof(node));
    if (p == NULL) {
        printf("memory allocation failed at enqueue\n");
        return;
    }
    p->val = val;
    p->next = NULL;
    if ((*queue).head == NULL) {
        (*queue).head = p;
        (*queue).tail = p;
    }
    else {
        (*queue).tail->next = p;
        (*queue).tail = p;
    }
}

int dequeue(Queue* queue) {
    if ((*queue).head == NULL) {
        printf("cannot dequeue a null head\n");
        return -1;
    }
    node* p = (*queue).head;
    (*queue).head = (*queue).head->next;
    int val = p->val;
    free(p);
    return val;
}

int queueHead(Queue queue) {
    return queue.head->val;
}

#endif // QUEUE_H