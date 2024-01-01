
/*

    จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นรูปผีเสื้อที่มีขนาดของปีกแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3)

*/

#include <stdio.h>

int main() {

    int num, a = 1;
    printf("Enter your input : ");
    scanf("%d", &num);

    for(int i = 1 ; i <= num - 1 ; i++) {
        for(int j = 1 ; j <= i ; j++) {
            printf("*");
        }

        for(int k = 1 ; k <= num - i - 1 ; k++) {
            printf(" ");
        }

        for(int m = num ; m >= i + 1 ; m--) {
            printf(" ");
        }

        for(int n = 1 ; n <= i ; n++) {
            printf("*");
        }

        printf("\n");

    }

    for(int p = 1 ; p <= (num*2) - 1 ; p++) {
        printf("*");
    }

    printf("\n");

    for(int i = 1 ; i <= num - 1; i++) {

        for(int q = num ; q >= i + 1 ; q--) {
            printf("*");
        }

        for(int r = 1 ; r <= i ; r++) {
            printf(" ");
        }

        for(int s = 1 ; s <= i - 1 ; s++) {
            printf(" ");
        }

        for(int t = num ; t >= i + 1 ; t--) {
            printf("*");
        }

        printf("\n");
    }
  
    return 0;
}