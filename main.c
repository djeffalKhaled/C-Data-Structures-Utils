#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "linkedLists.h"
#include "stack.h"
#include "queue.h"
#include "doublyLinkedLists.h"
#include "strings.h"
#include "input.h"

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

void queueTesting() {
    Queue queue = newQueue();
    enqueue(&queue, 100);
    enqueue(&queue, 200);
    enqueue(&queue, 300);
    enqueue(&queue, 400);

    dequeue(&queue);

    printList(queue.head);
}

void doubleListTesting() {
    DoubleNode* head;
    DoubleNode* tail;
    FIFO_FillDouble(&head, &tail, 5);
    printReverseDoubleList(tail);
}

int main() {
    println("what's your first name?");
    string firstName = scanStr();
    printf("hello %s\n", firstName);

    string lastName = input("what's your last name?");
    printf("Nice to meet you Mr %s\n", lastName);

    string phrase = input("give a phrase");
    printf("your phrase: %s\n", phrase);

    int x = inputInt("what's your age?");
    printf("you are %d years old", x);
    return 0;
}

