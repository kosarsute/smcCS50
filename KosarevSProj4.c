// Sergei Kosarev
// CS 50
// Project 4 -  Pointers
// Oct 19, 2022
// Due Date - Oct 22

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void valuesOfCandD(double a, double b, double *c, double *d);
int *makeArrayOf(int n);
void secondPart();
void countAboveAvg(int q[], int size, double avg);
void countUsersInput();
void valuesAandB(void);
void sentenceSearch(void);

int countSecond(char *str, char search)
{
    int i = 0;
    int countSecond = -1;
    while (str[i] != '\0')
    {
        if (str[i] == search)
        {
            countSecond++;
        }
        i++;
    }
    if (countSecond == -1)
    {
        return countSecond;
    }
    return countSecond + 1;
}
int main()
{
    int size = 10;
    int sum;
    int avg;
    int *q;
    int i;
    valuesAandB();
    srand(time(NULL));
    q = makeArrayOf(10);
    for (i = 0; i < 10; i++)
    {
        printf("%d ", q[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
    for (i = 0; i < 10; i++)
    {
        sum += q[i];
    }
    printf("Sum ==> %d\n", sum);
    avg = sum / 10;
    printf("Avg= %d\n", avg);
    countAboveAvg(q, size, avg);
    sentenceSearch();
    return 0;
}
void valuesOfCandD(double a, double b, double *c, double *d)
{
    *c = a / b;
    *d = a * b;
}

int *makeArrayOf(int n)
{
    int *x;
    int i;
    x = malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        // srand(time(NULL));
        x[i] = rand() % (80 - 20 + 1) + 20;
    }
    return x;
}
void countAboveAvg(int q[], int size, double avg)
{
    int i, count = 0;
    for (i = 0; i < size; i++)
    {
        if (q[i] > avg)
            count++;
    }
    printf("Above avg=> %d\n", count);

    fflush(stdin);
}
void valuesAandB(void)
{

    double a, b, c, d;
    printf("Enter values for a and b: ");
    scanf("%lf %lf", &a, &b);
    valuesOfCandD(a, b, &c, &d);
    printf("C and D equals: %lf %lf", c, d);
    printf("\n");
}
void sentenceSearch(void)
{
    char sentence[50];
    char sentenceLower[50];
    char search;

    printf("Enter sentence: ");
    fgets(sentence, 50, stdin);

    fflush(stdin);

    printf("Enter search character: ");
    scanf("%c", &search);

    if (countSecond(sentence, search) == -1)
    {
        printf("character not found\n");
    }
    else
    {
        printf("Occurred %d times\n", countSecond(sentence, search));
    }
}
