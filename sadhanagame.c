#include <stdio.h>
int main ( )
{
    int secret = 25;
    int guess;
    int attempts = 0;

    printf("=====NUMBER GUSSING GAME=====");

    printf("GUESS a number between 1 and 50:");
    scanf("%d", &guess);

    while ( guess ! secret)
    {
        attempts++;

        if (guess > secret)
        {
            printf("Too High! Try Again.\n");
        }
        else
        {
            printf("Two Low! Try Again.\n");
        }

        printf("\nGuess a number between 1 and 50:");
        scanf("%d",&guess);

    }

    attempts++;

    printf("\nCongratulation! You guessed the correct number . \n");
    printf("Total Attempts: %d\n" , attempts);

    printf("=====GAME OVER=====");

    return 0;
}