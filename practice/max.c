/*

    จงเขียนโปรแกรมเพื่อรับตัวเลข 3 ตัว แล้วหาตัวเลขที่มีค่ามากที่สุด (Level 1)

*/

#include <stdio.h>

int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    int max = num1;
    if(num2 > max) {
        max = num2;
    }
    if(num3 > max) {
        max = num3;
    }

    printf("%d", max);

    return 0;
}