
/*
    สร้างฟังก์ชัน swap(int*, int*) ที่สามารถสลับค่าที่เก็บอยู่ในตัวแปร 2 ตัวได้ และเขียนโปรแกรมเพื่อทดสอบการทำงานของฟังก์ชัน swap
    ตัวอย่างเช่น 
    input : 5 3
    output : 3 5
*/

#include <stdio.h>

int swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d", a, b);

    return 0;
}