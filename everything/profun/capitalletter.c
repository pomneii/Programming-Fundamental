
/*
    เขียนโปรแกรมรับ string 1 ชุด แล้วแสดงผลเฉพาะตัวอักษรพิมพ์ใหญ่ใน string ดังกล่าว
    ตัวอย่าง เช่น
    input : AMLmfwefpeFPEPffFkfpefvs
    output : AMLFPEPF
*/

#include <stdio.h> 
#include <string.h>

int main() {
    char str[100];
    printf("Enter your string : ");
    scanf("%s", str);

    for(int i = 0 ; i < strlen(str) ; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i]);
        }
    }
    return 0;
}