/*
 * This is a stupid tiny program
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cardName[3];
    int count = 0;

    while (cardName[0] != 'X')
    {
        puts("Enter the Card Name: ");
        scanf("%2s", cardName);

        int val = 0;

        switch (cardName[0])
        {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'X':
                continue;
            default:
                val = atoi(cardName);
                if ((val < 1) || (val > 10))
                {
                    puts("I don't understand that value");
                    continue;
                }
        }

        if ((val > 2) && (val < 7))
            count++;
        else if (val == 10)
            count--;

        printf("Current count: %i\n", count);
    }

    return 0;
};