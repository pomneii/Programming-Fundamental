
/*
    เช็คว่าเป็น palindrome หรือไม่
*/

#include <stdio.h>
#include <string.h>

int main() {

    char str1[20];
    char str2[20];
    printf("Enter first string : ");
    scanf("%s", str1);
    printf("Enter second string : ");
    scanf("%s", str2);
    int len1, len2;
    len1 = strlen(str1);
    len2 = strlen(str2);
    int too = 0;
    int i = 0, j = 0;
    char *p, *q;

    if(len1 == len2) {
        while(*p != '\0') {
            p = strchr(str2, str1[i]);
            //q = strchr(str1, str2[j]);
            if(p == NULL) {
                too = 1;
                break;
            } else {
                i++;
                //j++;
            }
        }
    } else {
        too = 1;
    }

    if(too == 1) {
        printf("False");
    } else {
        printf("True");
    }
    return 0;
}