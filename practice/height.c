
/*

    จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร (Level 3)

*/

#include <stdio.h>

int main() {

    int sum = 0;
    struct student {
        int height;
    };

    struct student s[10];

    for(int i = 1 ; i <= 10 ; i++) {
        scanf("%d", &s[i].height);
    }

    for(int i = 1 ; i <= 10 ; i++) {
        printf("Student %d : %d \n", i, s[i].height);
    }

    for(int i = 1 ; i <= 10 ; i++) {
        sum = sum + s[i].height;
    }
    printf("Sum = %d\n", sum);
    printf("Average of height : %d\n", sum / 10);

    return 0;
}