#include <stdio.h>

int power(int base, int n) {
    int r = base;
    for (int i = 0; i < n; i++) {
        r = r * base;
    }
    return r;
}

int main() {
    printf("%d\n", power(5, 2));
    printf("%d\n", power(10, 3));
    
    return 0;
}