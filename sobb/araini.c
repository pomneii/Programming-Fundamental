
/*
    เช็คว่าเป็นสามเหลี่ยมมุมฉากหรือไม่
*/

#include <stdio.h>

int main() {
    int num[3], temp;
    for(int i = 0 ; i < 3 ; i++) {
        scanf("%d", &num[i]);
    }
    // find max
    for(int i = 0 ; i < 3 ; i++) {
        if(num[i + 1] < num[i]) {
            temp = num[i + 1];
            num[i + 1] = num[i];
            num[i] = temp;
        }
    } 
    // printf("%d", num[2]);
    if((num[2] * num[2]) == ((num[0] * num[0]) + (num[1] * num[1]))) {
        printf("Yes");
    } else {
        printf("No");
    }


    return 0;
}