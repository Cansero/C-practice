#include <stdio.h>
#define MAXLINE 1000

void mystrcpy(char *s, char *t) {
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }
}


int strcmp(char *s, char *t) {
    for (; *s == *t; *s++, *t++) {
        if (*s == '\0') {
            return 0;
        }
    }

    return *s - *t;
}


int main() {
    char origen[] = "Ivan tiene un carro negro chido";
    char copia[MAXLINE];

    mystrcpy(copia, origen);

    printf("%s\n", copia);

    printf("%d\n", strcmp(copia, origen));

    return 0;
}