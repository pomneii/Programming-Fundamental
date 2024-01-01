
#include <stdio.h>

int main() {

    int num[3], temp, mix;
    for(int i = 0 ; i < 3 ; i++) {
        scanf("%d", &num[i]);
    }

    for(int i = 0 ; i < 3 ; i++) {
        if(num[i + 1] < num[i]) {
            temp = num[i];
            num[i] = num[i + 1];
            num[i + 1] = temp;
        }
    }

    mix = (num[0] * num[1] * num[2]);

    for(int i = num[2] ; i <= mix ; i++) {
        if(i % num[0]== 0 && (i % num[1]== 0) && (i % num[2]== 0)) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}