// Sergei Kosarev
// CS 50
// Project 3 - Creating and Sorting Arrays
// Oct 13, 2022
// Due Date - Oct 22

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ARRAY_SIZE 20       // Size of array
#define UPPER_LIMIT 20      // Max. number of arrays used
#define LOWER_LIMIT 12      // Min. number of arrays used
#define DATA_UPPER_LIMIT 90 // Max. of each array element
#define DATA_LOWER_LIMIT 10 // Min. of each array element

void RandomaizeAndPrint(int[], int);
void FindMaxMin(int[], int);
void FindAverage(int[], int);
void SortArraySelect(int[], int);
void Swap(int *p, int *q);
void FindMedian(int[], int);

int main()
{
    int sampleSize;
    int samples[ARRAY_SIZE];
    srand(time(NULL));
    sampleSize = rand() % (UPPER_LIMIT - LOWER_LIMIT + 1) + LOWER_LIMIT;
    RandomaizeAndPrint(samples, sampleSize);
    FindMaxMin(samples, sampleSize);
    FindAverage(samples, sampleSize);
    SortArraySelect(samples, sampleSize);
    FindMedian(samples, sampleSize);

    return 0;
}
void RandomaizeAndPrint(int samples[], int sampleSize)
{
    int index;
    printf("Sample Size: %d\n\n", sampleSize);
    printf("Array elements: \n");
    for (index = 0; index < sampleSize; index++)
    {
        samples[index] = rand() % (DATA_UPPER_LIMIT - DATA_LOWER_LIMIT + 1) + LOWER_LIMIT;
        printf("%d ", samples[index]);
    }
    printf("\n\n");
}
void FindMaxMin(int samples[], int sampleSize)
{
    int i;
    int max = samples[0];
    int min = samples[0];

    for (i = 0; i < sampleSize; i++)
    {
        if (samples[i] > max)
        {
            max = samples[i];
        }
        if (samples[i] < min)
        {
            min = samples[i];
        }
    }
    printf("Maximum = %d, Minimum = %d\n", max, min);
    printf("\n");
}
void FindAverage(int samples[], int sampleSize)
{
    int avg = 0;
    int sum = 0;
    int i;
    for (i = 0; i < sampleSize; i++)
    {
        // Sum all elements
        sum += samples[i];
        // Find average
        avg = sum / sampleSize;
    }
    printf("Average = %d\n", avg);
    printf("\n");
}
void SortArraySelect(int samples[], int sampleSize)
{
    int i, j;
    int min;

    for (i = 0; i < sampleSize - 1; i++)
    {
        // Assign min as a first element
        min = i;
        for (j = i + 1; j < sampleSize; j++)
        {
            // If second element less then min
            if (samples[j] < samples[min])
            { //Assign that element as a new min
                min = j;
            }
        }
        // If new min not equals current element
        if (min != i)
        {
            // Perform swap
            Swap(&samples[i], &samples[min]);
        }
    }
    printf("Sorted array: ");
    for (i = 0; i < sampleSize; i++)
        printf("%d ", samples[i]);
    printf("\n\n");
}
//Swap function with pointers
void Swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
void FindMedian(int samples[], int sampleSize)
{
    int m, i;
    int mid;
    for (i = 0; i < sampleSize; i++)
    {
        // If number of elements are even
        if (sampleSize % 2 == 0)
        {
            mid = sampleSize / 2;
            m = ((samples[mid] + samples[mid - 1]) / 2);
        }
        // If number of elements are odd
        else
        {
            mid = sampleSize / 2;
            m = samples[mid];
        }
    }
    printf("Median = %d\n", m);
}
