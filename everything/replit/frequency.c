/*
  จงเขียนโปรแกรมเพื่อรับ input เป็นตัวเลข 10 ตัว แล้วแสดงผลว่า ตัวแลขที่ป้อนมีตัวเลขอะไรบ้าง และแต่ละเลขมีจำนวนกี่ตัว

Test Case 1:
input : 1, 2, 3, 4, 5, 1, 2, 3, 4, 5
Expected Output:
Element 1: Frequency = 2
Element 2: Frequency = 2
Element 3: Frequency = 2
Element 4: Frequency = 2
Element 5: Frequency = 2


Test Case 2:
input : 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
Expected Output:
Element 1: Frequency = 10
  */

#include <stdio.h>

int main() {
  int num[10], bi[10], i , j, count, temp;
  printf("Enter your numbers : ");

  for(i = 0 ; i < 10 ; i++) {
      scanf("%d", &num[i]);
  }

  //ถ้า input ไม่มี , จะรันได้ แต่โจทย์มี , เลยรันไม่ได้

  for(int i = 0 ; i < 10 ; i++) {
    for(int j = i + 1 ; j < 10 ; j++) {
      if(num[i] > num[j]) { // เป็นการเปรียบเทียบแล้วสลับที่
        temp = num[i]; // เอาค่ามาเก็บใน temp
        num[i] = num[j]; // เอาค่า a[j] ไปใส่ใน a[i]
        num[j] = temp; // a[j] ก็จะเอาค่า temp มาใส่
      }
    }
  }

  for(i = 0 ; i < 10 ; i++) {
    count = 1;
    if(num[i] != -1) {
      for(j = i + 1 ; j < 10 ; j++) {
        if(num[i] == num[j]) {
          count++;
          num[j] = -1;
        }  
      }      
      bi[i] = count;
    }    
  }  
  for(i = 0 ; i < 10 ; i++) {
    if(num[i] != -1) {
      printf("Element %d: Frequency = %d \n", num[i], bi[i]);
    }
  }
  
  return 0;
}