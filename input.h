#ifndef INPUT_H
#define INPUT_H

#include <stdio.h>
#include <stdlib.h>

// reads an integer
int scanInt() {
    int x;
    scanf("%d", &x);
    return x;
}

// prints a prompt and then reads an integer
int inputInt(char* prompt) {
    printf("%s\n", prompt);
    int x;
    scanf("%d", &x);
    return x;
}

// reads a float
float scanFloat() {
    float x;
    scanf("%f", &x); 
    return x;
}

// prints a prompt and then reads a float
float inputFloat(char* prompt) {
    printf("%s\n", prompt);
    float x;
    scanf("%f", &x); 
    return x;
}

// reads a double
double scanDouble() {
    double x;
    scanf("%lf", &x);
    return x;
}

// prints a prompt and then reads a double
double inputDouble(char* prompt) {
    printf("%s\n", prompt);
    double x;
    scanf("%lf", &x);
    return x;
}

#endif // INPUT_H