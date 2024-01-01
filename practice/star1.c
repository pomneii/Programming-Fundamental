
/*

    จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นจำนวนเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 1)


*/

// #include <stdio.h>

// int main() {

//     int num;
//     scanf("%d", &num);
//     for(int i = 0 ; i < num ; i++) {
//         printf("*");
//     }

//     return 0;
// }

#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);

    for(int i = 1 ; i <= num ; i++) {
        printf("*");
    }

    return 0;
}