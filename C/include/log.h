#ifndef LOG_H
#define LOG_H

/**
 * Simple log functions for easier output
 */

#include <stdio.h>

void l(const char* msg) {
    printf("LOG: %s \n", msg);
}

void ls(const char* str1, const char* str2) {
    printf("LOG: %s:%s \n", str1, str2);
}

void li(const char* str1, int n) {
    printf("LOG: %s:%i \n", str1, n);
}

void PrintValueArrow(int value)
{
    printf("%i --► ", value);
}



#endif

