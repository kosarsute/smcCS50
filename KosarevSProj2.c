// Sergei Kosarev
// CS 50
// Project 2 - Diamond Pattern
// Oct 6, 2022

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define UPPER_LIMIT 41
#define LOWER_LIMIT 21

int main(void)
{
    int sampleSize;
    int halfSampleSize;
    srand(time(NULL));
    sampleSize = rand() % (UPPER_LIMIT - LOWER_LIMIT + 1) + LOWER_LIMIT;
    if (sampleSize % 2 == 0)
        sampleSize++;
    int i, j;
    halfSampleSize = ((sampleSize - 1) / 2);
    for (i = 1; i <= halfSampleSize; i++)
    {
        for (j = i; j <= halfSampleSize; j++)
        {
            putchar(' ');
        }
        for (j = 1; j < i; j++)
        {
            putchar('S');
        }
        for (j = 1; j <= i; j++)
        {
            putchar('S');
        }
        putchar('\n');
    }
    for (j = 1; j <= sampleSize; j++)
    {
        putchar('=');
    }
    putchar('\n');
    for (i = 1; i <= halfSampleSize; i++)
    {
        for (j = 1; j <= i; j++)
        {
            putchar(' ');
        }
        for (j = i; j < halfSampleSize; j++)
        {
            putchar('K');
        }
        for (j = i; j <= halfSampleSize; j++)
        {
            putchar('K');
        }
        putchar('\n');
    }
    return 0;
}
