
/*

    จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วคำนวณหาผลบวกของจำนวนที่น้อยที่สุด กับจำนวนที่น้อยที่สุดเป็นลำดับสอง (Level 2)

*/

#include <stdio.h>

int main() {
    int num[3], temp;
    scanf("%d", &num[0]);
    scanf("%d", &num[1]);
    scanf("%d", &num[2]);
    
    for(int i = 0 ; i < 3 ; i++) {
        if(num[i] > num[i + 1]) {
            temp = num[i + 1];
            num[i + 1] = num[i];
            num[i] = temp;
        }
    }

    printf("%d", num[0] + num[1]);

    return 0;
}