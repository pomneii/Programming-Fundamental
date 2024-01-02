
/*

จงเขียนโปรแกรมรับประโยค 1 ประโยคแล้วแสดงผลประโยคนั้นตรงกลางจอภาพ

*/

/*

    เช็คความยาวของประโยค แล้วเอาความกว้างของหน้าจอ - ความยาวของประโยค = ความกว้างหน้าจอที่เหลือ จากนั้น / 2 
    จะจุดกึ่งกลางของหน้าจอ แล้วก็ให้ตำแหน่งก่อนหน้าจุดกึ่งกลางแสดงช่องว่าง แล้วค่อยแสดงประโยค

*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

// check length of string
int centerAlign(int width, int len) {
    return (width - len) / 2;
}

int main() {
    char str[100];
    printf("Enter your string : ");
    //scanf("%s", str);
    gets(str); // try to use scanf but it's not working
    int len;
    len = strlen(str);

    // find the width of window
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    int width;
    width = csbi.dwSize.X;

    int startPos = centerAlign(width, len);

    for(int i = 0 ; i < startPos ; i++) {
        printf(" ");
    }

    printf("%s\n", str);

    return 0;
}