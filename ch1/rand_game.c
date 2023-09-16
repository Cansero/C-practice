#include <stdio.h>
#include <stdlib.h>

int randLetter() {
    int range_min = 97;
    int range_max = 122;
    int r = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;
    return r;
}

int main() {
    int answer, user_guess, cpu_guess;
    int turn = 1;
    int is_winner = 0;

    srand(1554);

    printf("Welcome to 'Guess the letter'\n");
    printf("Chose a letter from A to Z and try to get it right before the computer\n");

    putchar(randLetter());

    while (!is_winner) {
        if (turn) {
            printf("Choose a letter:");
            
        }
    }

    return 0;
}
