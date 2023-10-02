#include <stdio.h>

void swap(int *px, int *py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}


int main() {
    int num1 = 20;
    int num2 = 35;

    printf("Numeros ahora: Num1 -> %d / Num2 -> %d\n", num1, num2);

    swap(&num1, &num2);

    printf("Numeros ahora: Num1 -> %d / Num2 -> %d\n", num1, num2);

    return 0;
}