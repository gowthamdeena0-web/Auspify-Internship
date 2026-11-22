#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, guess, attempts = 0,op;

    srand(time(0));
    randomNumber = rand() % 100 + 1; // 1 to 100

    printf("=== Number Guessing Game ===\n");
    printf("Guess a number between 1 and 100\n");

    do
    {
        printf("Enter your guessing Number: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > randomNumber)
        {
            printf("Too High!\n");
        }
        else if (guess < randomNumber)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("Congratulations! You guessed correctly.\n");
            printf("Attempts: %d\n", attempts);
        }
	
    }while (guess != randomNumber);
    return 0;
}
   
