
/*
  จงเขียนโปรแกรมรับ input เป็นตัวเลข 2 ตัวแล้วแสดงผลค่า ห.ร.ม ของตัวเลขทั้งสอง

  Test Case 1:
  input : 
  Number 1: 12
  Number 2: 18
  Expected Output: GCD = 6

  Test Case 2:
  input : 
  Number 1: 25
  Number 2: 5
  Expected Output: GCD = 5
*/

#include <stdio.h>

int main(void) {
  int num1, num2, i, less, more = 0;
  printf("Enter your number 1 : ");
  scanf("%d", &num1);
  printf("Enter your number 2 : ");
  scanf("%d", &num2);

  if(num2 < num1) {
    less = num2;
  } else {
    less = num1;
  }
  for(i = 1 ; i <= less ; i++) {
    if(num1 % i == 0 && num2 % i == 0) {
        more = i;
    }
  }
  printf("%d", more);

  return 0;
}