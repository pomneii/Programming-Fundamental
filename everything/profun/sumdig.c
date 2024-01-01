
/*
  จงเขียนโปรแกรมรับ Input เป็นตัวเลข 1 ตัวแล้วแสดงผล ผลรวมเลขโดดแต่ละหลัก

  Test Case 1:
  Input Number: 12345
  Expected Output: Sum = 15

  Test Case 2:
  Input Number: 987654321
  Expected Output: Sum = 45
*/

#include <stdio.h>

int main(void) {
  int num, a, sum;
  printf("Enter your number : ");
  scanf("%d", &num);
  sum = 0;
  while(num != 0) {
    a = num % 10;
    sum = sum + a;
    num /= 10;
  }
  printf("Sum = %d", sum);
  return 0;
}