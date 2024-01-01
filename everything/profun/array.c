
/*
    How to use loop with array
*/

#include <stdio.h>

int main() {
    int p, x[5] = {10, 9, 8, 7, 6};

    for(p = 0 ; p <= 4 ; p++) {
        printf("%d\n", x[p]);
    }

    return 0;
}