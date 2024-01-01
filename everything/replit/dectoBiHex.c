
/*
    เขียนโปรแกรมรับ input เป็นตัวเลข 1 ตัวแล้วแสดงผลค่าตัวเลขฐานสอง และฐานสิบหกของตัวเลขนั้น

    Input : 120
    Output : 
            1111000
            78

    Input : 534
    Output:
            1000010110
            216
*/

#include <stdio.h>

void dectoBi(int num) {

    int bi[20];
    int i = 0;

    while(num > 0) {
        bi[i] = num % 2;
        num = num / 2;
        i++;
    }

    for(int j = i - 1 ; j >= 0 ; j--) {
        printf("%d", bi[j]);
    }
}

void dectoHex(int num) {

    // printf("%x", num); fast key
    char hex[50];
    int m = 0;

    while(num) {
        int temp = num % 16;
        if(temp < 10) {
            hex[m] = '0' + temp;
        } else {
            hex[m] = 'A' + (temp - 10); // อักขระบวกตาม temp / ASCII 'A' เริ่มที่ 65
        }

        num = num / 16;
        m++;
    }

    for(int p = m - 1 ; p >= 0 ; p--) {
        printf("%c", hex[p]);
    }
}

int main() {

    int num;
    printf("Enter your number : ");
    scanf("%d", &num);

    dectoBi(num);
    printf("\n");
    dectoHex(num);

    return 0;
}