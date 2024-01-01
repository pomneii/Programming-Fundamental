#include <stdio.h> 

int main() {
    int num, bi[100], i, j;
    printf("Enter your number : ");
    scanf("%d", &num);
    i = 0;
    while(num > 0) {
        bi[i] = num % 2;
        num /= 2;
        i++;
    }

    for(j = i - 1 ; j >= 0 ; j--) {
        printf("%d", bi[j]);
    }
    return 0;
}