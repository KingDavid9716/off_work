#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{  const int MIN = 100;
   const int MAX = 500;
    int guesses, answer, guess;
    
    printf("This is a guessing game where you guess what number the computer chose.\n");
   
   printf("\nIf you guess more than 8 times, You lose and if you guess less than 8 times, You win.\n");
    printf("\n");
    printf("                    RANGE IS BETWEEN 100 - 500\n");
    printf("                         GOOD LUCK!!!\n");
    printf("\n");
    
    // Seed the random number generator with this
    srand(time(0));
    
    // Generate the answer within this specified range using the formula
    answer = (rand() % (MAX - MIN + 1)) + MIN;
   
    // Prompt user for guesses
    do {
        printf("Enter guess: ");
        scanf("%d", &guess);
       
        if (guess < MIN || guess > MAX)
        {
            printf("Out of range\n");
        } 
        else if (guess > answer) 
        {
            printf("This is Higher Than The Answer\n");
        } 
        else if (guess < answer) 
        {
            printf("This is Lesser Than The Answer\n");
        } 
        else 
        {
            printf("CORRECT\n");
        }
        
        guesses++;
        
    } while (guess != answer);
  
  printf("The Answer is %d\n", answer);
  
  if (guesses > 8 )
  {
      printf("But you LOST the game...\n");
      printf("You guessed %d times...\n", guesses);
  }
  else 
  {
    printf("You WON the game...\n");
    printf("You guessed %d times...\n", guesses);
    printf("ONE BOTTLE OF HEINEKEN FOR YOU!!!!!!");
  }
   
 return 0;
}
