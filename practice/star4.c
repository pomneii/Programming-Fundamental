
/*

    จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นกรอบสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)

*/

#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);

    for(int i = 1 ; i <= num ; i++) {
        if(i == 1 || i == num) {
            for(int j = 1 ; j <= num ; j++) {
                printf("*");
            }
        } else {
            for(int k = 1 ; k <= num ; k++) {
                if(k == 1 || k == num) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
        }

        printf("\n");
    }

    return 0;
}