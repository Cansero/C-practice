#include <stdio.h>


void swap(int v[], int i, int j) {
    int temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}


void qsort(int v[], int left, int right) {
    int i, last;

    if (left >= right) {
        return;
    }

    swap(v, left, (left + right) / 2);
    last = left;

    for (i = left + 1; i <= right; i++) {
        if (v[i] < v[left]) {
            swap(v, ++last, i);
        }
    }

    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}


int main() {
    int i;
    int list[] = {13,5,461,132,86,1,32,64,978,4137,57,45};

    for (i = 0; i < 12; i++) {
        printf("%d, ", list[i]);
    }

    printf("\n");

    qsort(list, 0, 11);

    for (i = 0; i < 12; i++) {
        printf("%d, ", list[i]);
    }

    return 0;
}
