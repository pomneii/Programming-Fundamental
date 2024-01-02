
/*

    จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่มากที่สุด กับจำนวนที่น้อยที่สุด (Level 1)

*/

#include <stdio.h>

int checkMin(int a, int b, int c) {
    int min;
    min = a;
    if(b < min) {
        min = b;
    }
    if(c < min) {
        min = c;
    }

    return min;
}

int checkMax(int a, int b, int c) {
    int max;
    max = a;
    if(b > max) {
        max = b;
    }
    if(c > max) {
        max = c;
    }

    return max;
}

int main() {
    int a, b, c, min, max;
    scanf("%d %d %d", &a, &b, &c);
    min = checkMin(a, b, c);
    max = checkMax(a, b, c);
    printf("%d", min + max);

    return 0;
}