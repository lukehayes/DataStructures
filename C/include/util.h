#include <stdlib.h>
#include <time.h>

/**
 * Generate a random number upto a maximum value.
 *
 * @param site_t max_value.
 *
 * return size_t.
 */
size_t rnd(size_t max_value)
{
    return rand() % max_value;
}

