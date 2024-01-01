
/*
    ให้นักศึกษาเขียนโปรแกรมรับจำนวนเต็ม 5 จำนวน เก็บใน array แล้วตรวจว่าลำดับตัวเลขที่รับมามีการเรียงจากน้อยไปมากหรือไม่

    input : 2 4 5 6 7
    output : Ascending order

    input : 2 8 5 3 7
    output : Not ascending order
*/

#include <stdio.h>

int main() {

    int num[5];
    int yes = 1;
    printf("Enter 5 numbers : ");
    for(int i = 0 ; i < 5 ; i++) {
        scanf("%d", &num[i]);
    }

    if(num[1] < num[0]) {
        yes = 0;
    } else {
        if(num[2] < num[1]) {
            yes = 0;
        } else {
            if(num[3] < num[2]) {
                yes = 0;
            } else {
                if(num[4] < num[2]) {
                    yes = 0;
                }
            }
        }
    }

    if(yes == 1) {
        printf("Ascending order");
    } else {
        printf("Not ascending order");
    }
    return 0;
}