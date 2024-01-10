#ifndef STRINGS_H
#define STRINGS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

// allocates space for the string
string newStr() {
    string str = (string)malloc(sizeof(char) * 256);
    return str;
}

// allocates space based on size for the string
string newStr_size(int size) {
    string str = (string)malloc(sizeof(char) * size);
    return str;
}

// reads a line of string sized at 256 characters
string scanStr() {
    string str = newStr();
    fgets(str, 256, stdin); 
    // Removes the new line
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    return str;
}

// reads a line of string sized at size
string scanStr_size(int size) {
    string str = newStr();
    fgets(str, size, stdin);
    // Removes the new line
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    return str;
}

// reads a word of string
string scanWordStr() {
    string str = newStr();
    scanf("%s", str);
    return str;
}

// prints the prompt and reads a line of string sized at 256 characters
string input(string prompt) {
    printf("%s\n", prompt);
    string str = newStr();
    fgets(str, 256, stdin);
    // Removes the new line
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    return str;
}

// prints the string with a new line
void println(string str) {
    printf("%s\n", str);
}

#endif // STRING_H