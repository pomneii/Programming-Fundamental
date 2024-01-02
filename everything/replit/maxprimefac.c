
/*
  เขียนโปรแกรมรับ input เป็นตัวเลข 1 ตัวแล้วแสดงผล ตัวประกอบที่มีค่ามากที่สุด (maximum prime factor)

  input : 21
  output : 7

  input : 1110
  output : 37
*/

#include <stdio.h>

int primeCheck(int num) {

  if(num <= 1) {
    return 0;
  }

  for(int i = 2 ; i * i <= num ; i++) {

    if(num % i == 0) {
      return 0;
    }
  }

  return 1;
}

int main() {

  int num;
  scanf("%d", &num);

  int maxPrimeFac = 0;

  for(int i = 2 ; i <= num ; i++) {

    if(num % i == 0 && primeCheck(i)) {

      maxPrimeFac = i;

    }
  }

  if(maxPrimeFac == 0) {
    
  } else {
    printf("%d", maxPrimeFac);
  }
  
  return 0;
}
