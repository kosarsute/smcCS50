#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void fillTD(int arr[12][9], int r, int c);
void sumAndParity(int arr[12][9], int r, int c);
void printDataAndParity(int arr[12][9], int r, int c);

int main()
{
    int arr[12][9];
    printf("Sergei Kosarev - Project 6: Adding Parity Bit\n");
    printf("\n");
    fillTD(arr, 12, 8);
    sumAndParity(arr, 12, 8);
    printDataAndParity(arr, 12, 9);
    printf("\n");
    printf("Sergei Kosarev - End of Project 6\n");
    return 0;
}
void fillTD(int arr[12][9], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = rand() % 2;
        }
    }
}
void sumAndParity(int arr[12][9], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        int sum = 0;
        for (j = 0; j < c; j++)
        {
            sum = sum + arr[i][j];
        }
        if (sum % 2 == 0)
        {
            arr[i][8] = 0;
        }
        else
        {
            arr[i][8] = 1;
        }
    }
}
void printDataAndParity(int arr[12][9], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j == 8)
            {
                printf("  ");
                printf("%d", arr[i][j]);
            }
            else
            {
                printf(" ");
                printf("%d", arr[i][j]);
            }
        }
        printf("\n");
    }
}
