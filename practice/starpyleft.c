
/*

    จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสามเหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)

*/

// #include <stdio.h>

// int main() {

//     int num;
//     printf("Enter your input : ");
//     scanf("%d", &num);
//     int i = 1;
//     while(i <= num) {
//         for(int j = 0 ; j < i ; j++) {
//             printf("*");
//         } 
//     printf("\n");
//     i++;
//     }

//     return 0;
// }

#include <stdio.h>

int main() {

    int num, i = 0;
    scanf("%d", &num);

    while(i <= num) {
        for(int j = 1 ; j <= i ; j++) {
            printf("*");
        }

        printf("\n");
        i++;
    }

    return 0;
}