#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int rollTwoDices(void);

#define UPPER_LIMIT 6 // max num of dice
#define LOWER_LIMIT 1 // min num of dice

int main()
{
    printf("Sergei Kosarev - Project 5: Craps\n");

    enum Status
    {
        CONTINUE,
        WIN,
        LOSE
    };
    enum Status statusOfGame;
    int result;
    int myPoints;
    srand(time(NULL));
    result = rollTwoDices();

    switch (result)
    {
    case 7:
    case 11:
        statusOfGame = WIN;
        break;
    case 2:
    case 3:
    case 12:
        statusOfGame = LOSE;
        break;

    default:
        statusOfGame = CONTINUE;
        printf("Point is %d. The game continues:\n", result);
        myPoints = result;
        while (statusOfGame == CONTINUE)
        {
            result = rollTwoDices();
            if (result == myPoints)
            {
                statusOfGame = WIN;
            }
            else if (result == 7)
            {
                statusOfGame = LOSE;
            }
        }
    }
    if (statusOfGame == WIN)
    {
        printf("Player wins.\n");
        printf("Sergei Kosarev - End of Project 5\n");
    }
    else
    {
        printf("Player loses.\n");
        printf("Sergei Kosarev - End of Project 5\n");
    }

    return 0;
}
int rollTwoDices(void)
{
    int dice1;
    int dice2;
    int sum;
    dice1 = rand() % (UPPER_LIMIT - LOWER_LIMIT + 1) + LOWER_LIMIT;
    dice2 = rand() % (UPPER_LIMIT - LOWER_LIMIT + 1) + LOWER_LIMIT;
    sum = dice1 + dice2;
    printf("Player rolled %d + %d = %d\n", dice1, dice2, sum);
    return sum;
}