#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: params
 * @m: second params
 * Return: xor
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor_res;
    unsigned int count = 0;

    xor_res = n ^ m;
    while (xor_res) {
        count += xor_res & 1;
        xor_res >>= 1;
    }

    return count;
}
