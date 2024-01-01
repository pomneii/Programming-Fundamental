
/*
    ให้เขียนโปรแกรมตรวจสอบว่า string ที่รับจากผู้ใช้งานเป็น palindrome หรือไม่
    ตัวอย่างเช่น
    input : abcdcba
    output : Palindrome
    
    input : teststring
    output : Not Palindrome
*/

#include <stdio.h> 

int main() {
    char *m, *n, str[50];
    m = str;
    n = str;
    int palin = 0;
    scanf("%s", str);
    
    while(*n != '\0') {
        n++;
    } n--;

    while(m < n) {
        if(*m != *n) {
            palin = 1;
        }
        m++;
        n--;
    }

    if(palin == 0) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}