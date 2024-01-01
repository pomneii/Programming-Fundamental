/*

    เขียนโปรแกรมเพื่อรับค่าจำนวนเต็มมา 1 จำนวน (ผู้ตรวจจะใส่ค่าตั้งแต่ 100 – 999) แล้วทำการแยกตัวเลขแต่ละหลักออกมาแล้วหาผลคูณของตัวเลขทุกหลัก 
    ให้ทําซ้ำเช่นนี้ไปเรื่อย ๆ จนเหลือผลลัพธ์เป็นเลขหลักเดียว ดังตัวอย่างการทำงานของโปรแกรม (Level 2)

*/

#include <stdio.h>

int digitMul(int num) {
    int mul = 1;
    while(num > 0) {
        mul *= num % 10;
        num /= 10;
    }
    return mul;
}

int main() {
    int num, x;
    scanf("%d", &num);
    printf("%d", num);
    while(num > 100) {
        x = digitMul(num);
        printf(" --> %d", x);
        num = x;
    }
    if(x <= 100 && x != 0 && x >= 10) {
        printf(" --> 0");
    }
    return 0;
}
