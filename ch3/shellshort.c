#include <stdio.h>


void shellshort (int v[], int n) {
    int gap, i, j;

    for (gap = n/2; gap > 0; gap /= 2) {
        for (i = gap; i < n; ++i) {
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                int temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
        }
    }
}


int main () {
    int len = 12;
    int unordered_list[] = {156,468,1,3,416,4,12,4,68,12,31,899};


    shellshort(unordered_list, 12);

    for (int i = 0; i < len; ++i) printf("%d ", unordered_list[i]);

    return 0;
}