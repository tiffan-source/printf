#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;

    len = printf("abel %b testt", 8);
    printf("\n%d", len);

    return (0);
}
