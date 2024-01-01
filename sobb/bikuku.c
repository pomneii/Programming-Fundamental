#include <stdio.h>

int main() {

    float num;
    scanf("%f", &num);
    int kiki[10];
    for(int i = 0 ; i < 10 ; i++) {
        kiki[i] = num * 2;
        num = (num * 2) - kiki[i];
    }
    printf("0.");
    for(int i = 0 ; i < 10 ; i++) {
        printf("%d", kiki[i]);
    }
    return 0;
}