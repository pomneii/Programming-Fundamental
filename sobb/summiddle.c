
/*
    ป้อนตัวเลข 4 ตัว แล้วหาผลบวกของเลขที่มากสุดระหว่างกลาง
*/

#include <stdio.h> 

int main() {
    int num[4], temp;
    for(int i = 0 ; i < 4 ; i++) {
        scanf("%d", &num[i]);
    }

    for(int i = 0 ; i < 4 ; i++) {
        if(num[i + 1] > num[i]) {
            temp = num[i + 1];
            num[i + 1] = num[i];
            num[i] = temp;
        }
    }

    printf("%d", num[1] + num[2]);
    

    return 0;
}