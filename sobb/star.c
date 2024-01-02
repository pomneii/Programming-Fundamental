
/*
    *********
    **     **
    * *   * *
    *  * *  *
    *   *   *
    *  * *  *
    * *    **
    *********
*/

// not finish

#include <stdio.h>

int main() {

    int num;
    int a = 1;
    scanf("%d", &num);
    int b = num;

    for(int i = 1 ; i <= num ; i++) {
        for(int j = 1 ; j <= num ; j++) {
            if(i == 1 || i == num) {
                printf("*");
            } else {
                if(j == 1 || j == num) {
                    printf("*");
                } else if(j == a) {
                    printf("*");
                } else if(j == b) {
                    printf("*");
                } 
                else {
                    printf(" ");
                }
            }
        }

        a++;
        b--;
        printf("\n");
    }

    return 0;
}