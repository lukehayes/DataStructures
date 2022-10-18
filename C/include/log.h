#ifndef LOG_H
#define LOG_H

/**
 * Simple log functions for easier output
 */

#include <stdio.h>

/**
 * Log a sring
 *
 * @param const char* msg
 *
 * @return void
 */
void l(const char* msg) {
    printf("LOG: %s \n", msg);
}

/**
 * Log two strings
 *
 * @param const char* str1
 * @param const char* str2
 *
 * @return void
 */
void ls(const char* str1, const char* str2) {
    printf("LOG: %s:%s \n", str1, str2);
}

/**
 * Log a string with an integer
 *
 * @param const char* str1
 * @param int n
 *
 * @return void
 */
void li(const char* str1, int n) {
    printf("LOG: %s:%i \n", str1, n);
}


/**
 * Log a pointer value
 *
 * @param const char* str1
 * @param const char* str2
 *
 * @return void
 */
void lp(const char* str1, int* n) {
    printf("LOG: %s\n\tMemory Address:%p\n\tActual Value: %i \n", str1, n, *n);
}

/**
 * Print an arrow icon.
 *
 * @param int n value
 *
 * @return void
 */
void PrintValueArrow(int value)
{ 
    printf("%i --► ", value);
}



#endif

