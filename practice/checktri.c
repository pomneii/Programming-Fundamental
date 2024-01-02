
/*

    จงเขียนโปรแกรมรับความยาวของด้านทั้ง 3 ของสามเหลี่ยมแล้วแสดงผลพื้นที่ของสามเหลี่ยมรูปนี้ในกรณีที่เป็นด้านของสามเหลี่ยม 
    และจะแสดงค่าเป็น 0 ถ้าไม่เป็นด้านของสามเหลี่ยม (Level 1)

*/

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int a, b, c, s;
//     float area;
//     scanf("%d %d %d", &a, &b, &c);
//     if((a + b) > c && (a + c) > b && (b + c) > a) {
//         s = (a + b + c) / 2;
//         area = sqrt(s * (s-a) * (s-b) * (s-c));
//         printf("%f", area);
//     } else {
//         printf("0");
//     }    
    
//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c, s;
    float area;
    scanf("%d %d %d", &a, &b, &c);

    if((a + b) > c && (a + c) > b && (b + c) > a) {
        s = (a + b + c) / 2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("%f", area);
    } else {
        printf("0");
    }


    return 0;
    
}