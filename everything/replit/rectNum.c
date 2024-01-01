
/*
    เขียนโปรแกรมรับ input เป็นตัวเลข 2 ตัว ตัวแรก (m) คือตัวเลขสำหรับคำนวณความยาวด้านของรูปสี่เหลี่ยมจตุรัส โดยขนาดของรูปสี่เหลี่ยมจะมีด้านยาว =2m+1 
    ส่วนตัวที่สอง (n) คือตัวเลขที่อยู่ตรงกลาง โดยถ้า m=3,n=0 จะได้สี่เหลี่ยมที่มีความกว้าง = 7 และมีตัวเลขที่อยู่ตรงกลางคือ 0 ดังนี้

    input :
    m=3
    n=0
    output : 
    3333333
    3222223
    3211123
    3210123
    3211123
    3222223
    3333333

    input :
    m = 2
    n = 1
    output :
    33333
    32223
    32123
    32223
    33333
*/

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter two number(first = the length and second  = the number in the middle) : ");
    scanf("%d %d",&m, &n);
    int value1, value2;
    int a = 2, b = 2;
    int num3 = m + n;
    int length = (2 * m) + 1;

    for (int i = 1 ; i <= length ; i++) {
        for (int j = 0 ; j < length ; j++) {
            value1 = num3 - j;

            if(value1 < n) {
                value1 = value1 + a;
                a = a + 2;
            }
            if(value1 == 10) {
                value1 = 0;
            }

            value2 = num3 - i + 1; 
            if(value2 < n) {
                value2 = value2 + b;
            }

            if(value2 == 10) {
                value2 = 0;
            }

            if(value1 == 0) {
                printf("%d", value1);
            } else if(value2 == 0) {
                printf("%d", value2);
            } else if(value2 > value1) {
                printf("%d", value2);
            } else {
                printf("%d", value1);
            }
        }

        printf("\n");
        a = 2;
        
        if(i > (length+1) / 2) {
            b = b + 2;
        }
    }

    return 0;
}