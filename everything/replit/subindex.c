
/*

    ให้นักศึกษาเขียนโปรแกรมรับ input เป็น string จำนวน 2 ชุด (long_string, sub_string) แล้วทำการค้นหาว่ามี sub_string อยู่ที่ตำแหน่ง (index) ใดใน long_string 
    ถ้าไม่พบ ให้แสดงตำแหน่งเป็น -1

    Test Case 1:
    String: "Hello World"
    Substring: "Hello"
    Expected Output: Substring found at index 0

    Test Case 2:
    String: "OpenAI is amazing"
    Substring: "is"
    Expected Output: Substring found at index 7

*/

#include<stdio.h>
#include<string.h>

 int main() {

    char* found;

    char long_string[50];
    gets(long_string);

    char sub_string[30];
    gets(sub_string);

    found = strstr(long_string, sub_string);

    if(found != NULL) {

        printf("Substring found at index %d \n",found - long_string);
    } else {

        printf("-1");
    }
    
    return 0;
}