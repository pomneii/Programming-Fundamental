/*

    จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นรูปนาฬิกาทรายที่มีขนาดความสูงของกระเปาะแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3)

*/

// not finish

#include <stdio.h>

int main() {

    int num;
    printf("Enter your input : ");
    scanf("%d", &num);

    for(int i = 1 ; i <= num ; i++) {

        for(int j = i ; j >= 1 ; j--) {
            printf(" ");
        }

        for(int k = i ; k <= num ; k++) {
            printf("*");
        }

        for(int l = num - 1 ; l >= i ; l--) {
            printf("*");
        }

        printf("\n");
    }

    //------------------------------------------------

    for(int i = 2 ; i <= num ; i++) {

        for(int a = num ; a >= i ; a--) {
            printf(" ");
        }

        for(int b = 1 ; b <= (2*i) - 1 ; b++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}