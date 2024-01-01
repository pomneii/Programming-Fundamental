/*

    จงเขียนโปรแกรมคำนวณเมตริก โดยโปรแกรมจะรับค่าเมตริก A และ B ซึ่งเป็นเมตริกขนาด 3x3 แล้วโปรแกรมจะแสดงผลลัพธ์ต่อไปนี้ 
    Det A , Det B , Inverse A , Inverse B , A+B , A-B , A . B , A x B (Level 5)

*/

#include <stdio.h>

int main() {

    int r1c1, r1c2, r1c3,
        r2c1, r2c2, r2c3,
        r3c1, r3c2, r3c3;
    printf("Enter 9 numbers for Metrix 3 x 3 : ");
    scanf("%d %d %d %d %d %d %d %d %d", &r1c1, &r1c2, &r1c3, &r2c1, &r2c2, &r2c3, &r3c1, &r3c2, &r3c3);

    int sumlow;
    int sumhigh;
    sumlow = (r1c1 * r2c2 * r3c2) + (r1c2 * r2c3 * r3c1) + (r1c3 * r2c1 * r3c2);
    printf("Sumlow : %d\n", sumlow);
    sumhigh = (r3c1 * r2c2 * r1c3) + (r3c2 * r2c3 * r1c1) + (r3c2 * r2c1 * r1c2);
    printf("Sumhigh : %d\n", sumhigh);
    printf("Det A : %d\n", sumlow - sumhigh);

    return 0;
}