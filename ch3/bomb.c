#include <stdio.h>
#include <ctype.h>
#include "../lib/mygetline.h"
#include <stdlib.h>
#include <time.h>
#define MAXLINE 1000


int rangedRand(int min, int max) {
    // stolen from internet, i dunno know how this works lol 
    int r = ((double)rand() / RAND_MAX) * (max - min) + min;
    return r;
}


double myatof(char s[]) {
    double val, power;
    int i, sign;

    for (i = 0; isspace(s[i]); i++) {
        ;
    }

    sign = (s[i] == '-') ? -1 : 1;

    if (s[i] == '+' || s[i] == '-') {
        i++;
    }

    for (val = 0.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
    }

    if (s[i] == '.') {
        i++;
    }

    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }

    return sign * val / power;
}


int main() {
    int min = 1;
    int max = 100;

    int options[5];
    int options_len = 5;

    srand(478552);

    int answer = rangedRand(min, max);

    for (int i = 0; i < options_len; ++i) {
        options[i] = rangedRand(1, 25);
    }

    printf("Get the number %d\n", answer);
    for (int i = 0; i < options_len; ++i) {
        printf("%d ", options[i]);
    }

    return 0;
}
