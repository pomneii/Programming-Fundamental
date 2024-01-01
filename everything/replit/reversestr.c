
/*
    เขียนโปรแกรมรับ input เป็น string 1 ตัวที่ประกอบด้วยคำหลายๆ คำ คั่นด้วยช่องว่าง แล้วแสดงผลลัพธ์เป็น string ที่มีการสลับลำดับคำจากหลังมาหน้า

    input : abc def ghi jkl
    outupt : jkl ghi def abc
*/

#include <stdio.h>
#include <string.h>

void reverseWord(char *str) {
    char *word = strtok(str, " "); // แยกคำโดยหา ช่องว่าง( " " )
    if(word == NULL) {
        return;
    }

    reverseWord(NULL); // เรียกตัวเองเพื่อเรียงคำที่เหลือในประโยค เป็น recursive 
    printf("%s ", word); 
}

int main() {

    char str[100];
    printf("Enter words : ");
    fgets(str, sizeof(str), stdin); // เก็บค่าตัวแปร / จำนวนสูงสุดก็คือขนาดของ str / stdin = standard input ซึ่งก็คือคีย์บอร์ด

    str[strcspn(str, "\n")] = '\0'; // ลบ \n เมื่อเรากด enter

    reverseWord(str);

    return 0;
}