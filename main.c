#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    int num;
    int guesses = 0;
    int userguess;
    bool guessed;

    srand(time(NULL));
    num = (rand() % 100) + 1;
    guessed = false;

    printf("Welcome to the Guess-A-Number game!");

    while (guessed != true) {
        guesses += 1;
        printf("Please enter any number = ");
        scanf ("%d", &userguess) ;
        printf("The User Entered Integer = %d\n", userguess) ;
        
        if(userguess > num) {printf("This guess is too high!");}
        if(userguess < num) {printf("This guess is too low!");}
        if(userguess == num) {
            printf("This is the correct number!,and the user guessed it in %d\n guesses!", guesses);
            guessed=true;
        }
    }
    return 0;
}
