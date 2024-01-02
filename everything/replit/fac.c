
/*
  
  จงเขียนโปรแกรมรับ input เป็นตัวเลขจำนวนเต็ม 1 ตัวแล้วแสดงผลเป็นการแยกตัวประกอบ

  input : 100
  output : 2 x 2 x 5 x 5

  input : 68
  output : 2 x 2 x 17
  
  */

#include <stdio.h>

int main(void) {
  int num;
  printf("Enter your number : ");
  scanf("%d", &num);

  while(num > 1) {
    for(int i = 2 ; i < num + 1 ; i++) {
        if(num % i == 0) {
            num /= i;
            printf("%d ", i);
            
            if(i < num + 1) {
                printf("x ");
            }
            break;
        }

    }
  }

  return 0;
}