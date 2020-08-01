#ifndef LOG_H
#define LOG_H

/**
 * Simple log functions for easier output
 */

#include <stdio.h>

void ds_log(const char* msg) {
    printf("LOG: %s \n", msg);
}

void ds_logs(const char* str1, const char* str2) {
    printf("LOG: %s:%s \n", str1, str2);
}

void ds_logi(const char* str1, int n) {
    printf("LOG: %s:%i \n", str1, n);
}



#endif

