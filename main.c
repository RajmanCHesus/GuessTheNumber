#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 200;
    int guess;
    int guesses = 0;
    int answer;

    srand(time(0));

    answer = (rand() % MAX) + MIN;
    printf("Guess the number between %d and %d.\n", MIN , MAX);
    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess < answer)
        {
            printf("Too low\n");
        }else{
            printf("Conrect!\n");
        }
        guesses++;
    } while (guess != answer);
    
    printf("**********************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("**********************");
    return 0;
}