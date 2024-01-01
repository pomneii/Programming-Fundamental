
/*

    จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นปิระมิดที่มีความสูงเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3)

*/

// #include <stdio.h>

// int main() {

//     int num;
//     printf("Enter your input : ");
//     scanf("%d", &num);

//     for(int i = 0 ; i < num ; i++) {

//         for(int j = 1 ; j <= num - i ; j++) {
//             printf(" ");
//         }

//         for(int k = 1 ; k <= 2*i - 1 ; k++) {
//         printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    for(int i = 1 ; i <= num ; i++) {

        for(int j = 1 ; j <= num - i; j++) {
            printf(" ");
        }

        for(int k = 1 ; k <= (2*i) - 1 ; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}