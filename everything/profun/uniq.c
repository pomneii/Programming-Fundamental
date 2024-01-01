
/*
    เขียนโปรแกรมรับค่า string 2 ตัว (A,B) แล้วให้ตรวจสอบว่า uniq(A) = uniq(B) หรือไม่ โดยใช้ pointer กับ array
    uniq() เป็นการตัดตัวอักษรที่อยู่ติดกันและซ้ำกันให้เหลือเพียงตัวเดียว
*/

#include <stdio.h> 
#include <string.h>

int main() {
    char str1[30], str2[30], *pfirst, *psecond, strnew1[30], strnew2[30];
    int i = 0, j = 0;
    int k = 0;
    int c = 1;
    pfirst = str1;
    psecond = str2;
    printf("Enter your first string : ");
    scanf("%s", str1);
    printf("Enter your second string : ");
    scanf("%s", str2);
    while (*pfirst != '\0') {
        while (*pfirst == *(pfirst + 1) && *(pfirst + 1) != '\0') {
            pfirst++;
        }
        strnew1[i] = *pfirst;
        pfirst++;
        i++;
    }

    while (*psecond != '\0') {
        while(*psecond == *(psecond + 1) && *(psecond + 1) != '\0') {
            psecond++;
        }
        strnew2[j] = *psecond;
        psecond++;
        j++;
    }
   
    if(i != j) {
        printf("NOT Equal");
    } else {
        while (k < i) {
            if(strnew1[k] != strnew2[k]) {
                c = 0;
                break;
            } else {
                k++;
            }
        }   

        if(c = 0) {
            printf("Not Equal");
        } else {
            printf("Equal");
        }
    }

    return 0;
}
