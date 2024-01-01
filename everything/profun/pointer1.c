
/*
    เขียนโปรแกรมรับ input เป็น string แล้วแสดงผล string ที่รับมา โดยใช้ pointer
    เฉพาะตัวอักษร a-z, A-Z
    แสดงผลโดยเปลี่ยนตัวพิมพ์เล็กเป็นตัวพิมพ์ใหญ่
    ตัวพิมพ์ใหญ่เป็นตัวพิมพ์เล็ก
    ตัวอย่างเช่น
    input : aB$Cde%f#
    output : AbcDEF
*/

#include <stdio.h>

int main() {
    char *p, str[50];
    p = str;
    scanf("%s", str);
    while(*p != '\0') {
        if(*p >= 'a' && *p <= 'z') {
            *p = *p - 'a' + 'A';
            printf("%c", *p);
        } else if(*p >= 'A' && *p <= 'Z') {
            *p = *p - 'A' + 'a';
            printf("%c", *p);
        }
    p++;
    }
    return 0;    
}