
/*

    จงเขียนโปรแกรมเพื่อรับตัวเลข 3 ตัว แล้วหาตัวเลขที่มีค่าน้อยที่สุด (Level 1)

*/

#include <stdio.h>

int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    int min;
    min = num1;
    if(num2 < min) {
        min = num2;
    }
    if(num3 < min) {
        min = num3;
    }

    printf("%d", min);

    return 0;
}