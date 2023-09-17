#include <stdio.h>
#include <stdlib.h>

int rangedRand(int min, int max) {
    // stolen from internet, i dunno know how this works lol 
    int r = ((double)rand() / RAND_MAX) * (max - min) + min;
    return r;
}

int main() {
    int answer, user_guess, cpu_guess;
    int turn = 1;
    int is_winner = 0;

    int min = 97;
    int max = 122;

    srand(7899);  // change everytime

    printf("Welcome to 'Guess the letter'\n");
    printf("Chose a letter from A to Z and try to get it right before the computer\n");

    answer = rangedRand(min, max);

    while (!is_winner) {
        if (turn) {
            printf("Choose a letter: ");
            user_guess = getchar();

            if (user_guess < min || user_guess > max) {
                printf("Charachter must be a letter\n");
            } else {
                if (user_guess == answer) {
                    printf("You are the winner!\n");
                    is_winner = 1;
                } else if (user_guess > answer) {
                    printf("Anwer is smaller (<)\n");
                } else {
                    printf("Answer is bigger (>)\n");
                }

                turn = 0;
            }
        } else {
            cpu_guess = rangedRand(min, max);
            
            printf("Computer guess is: ");
            putchar(cpu_guess);
            printf("\n");

            if (cpu_guess == answer) {
                printf("Computer wins!\n");
                is_winner = 1;
            } else if (cpu_guess > answer) {
                max = cpu_guess;
            } else {
                min = cpu_guess;
            }
            turn = 1;
        }
    }

    printf("Thanks for playing!\n");

    return 0;
}
