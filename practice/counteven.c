/*

    จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 4 จำนวน แล้วหาว่ามีเลขคู่กี่จำนวน (Level 1)

*/

#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int count = 0;
    if(a % 2 == 0) {
        count += 1;
    }
    if(b % 2 == 0) {
        count += 1;
    }
    if(c % 2 == 0) {
        count += 1;
    }
    if(d % 2 == 0) {
        count +=1;
    }

    printf("%d", count);

    return 0;
}