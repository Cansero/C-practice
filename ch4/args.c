#include <stdio.h>
#include <string.h>
#include "../lib/mygetline.h"

#define MAXLINE 1000

int main(int argc, char *argv[]) {
    char line[MAXLINE];
    int found = 0;

    if (argc != 2) {
        printf("Uso: find patron\n");
    } else {
        while (mygetline(line, MAXLINE) > 0){
            if (strstr(line, argv[1]) != NULL) {
                printf("%s\n", line);
                found++;
            }
        }
    }

    return found;
}