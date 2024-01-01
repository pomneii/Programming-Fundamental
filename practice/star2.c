
/*

    จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)

*/

#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);

    for(int row = 1 ; row <= num ; row++) {
        for(int col = 1 ; col <= num ; col++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}