#include <stdio.h>

#define IN 1
#define OUT 0

main() {
    int c, nl, nw, nc, state;

    nl = nw = nc = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        nc += 1;

        if (c == '\n') {
            nl += 1;
        }

        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        } else if (!state) {
            state = IN;
            nw += 1;
        }
    }

    printf("\nNew lines:%d\nWords:%d\nNumber of characters:%d", nl, nw, nc);
}
