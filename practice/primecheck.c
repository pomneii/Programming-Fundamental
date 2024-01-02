
/*

    จงเขียนโปรแกรมเพื่อรับข้อมูลชนิดตัวเลข แล้วตรวจสอบว่าตัวเลขที่ผู้ใช้ใส่เข้ามานั้นเป็นจำนวนเฉพาะหรือไม่ 
    เมื่อแสดงผลลัพธ์แล้วให้กลับไปรอรับข้อมูลใหม่วนอย่างนี้ไปเรื่อยๆ จนกระทั่งผู้ใช้ใส่ค่า -99 จึงจบการทำงาน (Level 2)

*/

#include <stdio.h>

int main() {
    int num, prime = 0;
    scanf("%d", &num);
    while (num != -99) {
        if(num == 0 || num == 1) {
            prime = 1;
        }
        for(int i = 2 ; i < num ; i++) {
            if(num % i == 0) {
                prime = 1;
            } 
        }

        if(prime == 0) {
            printf("Prime Number");
            break;
        } else {
            printf("Not Prime Number");
            break;
        }
    }  

    return 0;
}