/*
F to C conversion script
*/

#include <stdio.h>
// print table from F to C fahr=0,20, ...,300

main() {
    int fahr;
    // int lower, upper, step;

    // lower = 0;
    // upper = 300;
    // step = 20;

    // fahr = lower;

    // while(fahr<=upper) {
    //     celsius = (5.0 / 9.0) * (fahr - 32.0);
    //     printf("%3.0f\t%6.2f\n", fahr, celsius);
    //     fahr = fahr + step;
    // }

    for (fahr = 0; fahr <= 300; fahr += 20) {
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}
