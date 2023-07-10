#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // this bad boi will generate a seed for our random number using the current time
    srand(time(0));

    int guess;
    int guesses;
    int answer;
    const int MIN = 1; // this is the minimum value of our rando number
    const int MAX = 100; // the maxi value of our rando number
    answer = (rand() %MAX) + MIN; // this will do the actual generating the random number part
    printf("==============WELCOME TO THE NUMBER GUESSING GAME==============\n");
    do{
        printf("Guess the number: ");
        scanf("%d", &guess);
        if(guess > answer)
        {
            printf("\nToo high! Try again\n");

        }
        else if(answer > guess)
        {
             printf("\nToo low! Try again\n");

        }
            else
            {
                printf("CORRECT!");
            }
        guesses++; // this'll track the number of guesses the user takes
    } while(guess != answer);

    printf("********************\n");
    if(guesses <= 10)
    {
        printf("Answer: %d\n", answer);
        printf("Guesses: %d \nIt was a clean guessing game.\n", guesses);
    }
    else if(guesses == 1)
    {
        printf("Answer: %d\n", answer);
        printf("And you only took a single guess, wizard\n");
    }

    else
    {
        printf("Answer: %d\n", answer);
        printf("Guesses: %d \nYou won but at what cost.\n", guesses);
    }
    printf("********************");

   return 0;
}
