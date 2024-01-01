/*

    จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วหาว่าจำนวนคู่ใดบวกกันแล้วได้ค่ามากที่สุด (Level 2)

*/

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int m = a + b;
    int n = a + c;
    int p = b + c;
    if(m > n && m > p) {
        printf("%d + %d = %d",a, b, m);
    }
    if(n > m && n > p) {
        printf("%d + %d = %d", a, c, n);
    }
    if(p > m && p > n) {
        printf("%d + %d = %d",b, c, p);
    }

    return 0;
}