/*
  ให้นักศึกษาเขียนโปรแกรมรับ string 1 ชุดแล้วตรวจสอบว่าเป็น email address ที่ถูกต้องหรือไม่
ตัวอย่าง
input : thanunchai.th@kmitl.ac.th
output : email address

input : thanunchai.kmitl.ac.th
output : not email address
*/

#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  printf("Enter your email : ");
  scanf("%s", str);
  char* p = strchr(str, '@'); // use pointer and strchr find '@' in string 
  if(p != NULL) {
    printf("email address");
  } else {
    printf("not email address");
  }

  return 0;
}