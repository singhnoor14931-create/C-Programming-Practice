#include <stdio.h>

int main()
{
    int secretNumber = 50;
    int guess;
    int turns = 5;
    int usedTurns = 0;
    int won = 0;
    
    printf("===== NUMBER GUESSING GAME =====\n");
    printf("Guess the number between 1 and 100.\n");
    printf("you have %d turns.\n\n", turns);
    for (int i = 1; i <= turns; i++)
    {
        
        printf("turn %d - enter your guess: ",i);
        scanf("%d", &guess);
        
        usedTurns++;
        
        if (guess == secretNumber)
        {
         printf("!!!!!!Congratulations!!!!!! You guessed the correct number!\n");
        
        won = 1;
        break;
        }
        if (guess > secretNumber)
        {
    
            printf("your guess is too high! try a smaller number.\n");
        }
        else
        {

            printf("your guess is too low! try a bigger number.\n");
        }
    }

    printf("\n===== GAME OVER =====\n");
    printf("turns consumed: %d\n",usedTurns);

    if(won == 1)

    {
        printf("you won the game!\n");
    }
    
    else
    {
        printf("you lost the game!\n");
        printf("the correct number was %d.\n",secretNumber);
    }


    return 0;
}
