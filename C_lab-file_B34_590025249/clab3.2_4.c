#include <stdio.h>

int main() {
    float pop = 100000;
    int i;

    for (i = 1; i <= 10; i++) {
        pop = pop + (pop * 0.10);   // increase by 10%
        printf("Population at end of year %d = %.0f\n", i, pop);
    }

    return 0;
}
