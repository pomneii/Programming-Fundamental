
/*
    ให้เขียนโปรแกรมเพื่อหาค่า Fibonacci ลำดับที่ n โดยรับค่า n แล้วแสดงผลค่า fiibonacci ลำดับที่ n
    ตัวอย่าง ลำดับ Fibonacci
        0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
*/

#include <stdio.h>

void Fibonacci(int n) {    
    static int n1 = 0,n2 = 1,n3;    
    if(n > 0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);    
         Fibonacci(n - 1);    
    }    
}    
int main() {    
    int n;    
    printf("Enter your input : ");    
    scanf("%d",&n);   
    if(n == 1) {
        printf("0");
    } else if (n == 2) {
        printf("0 1 ");
    } else {
        printf("0 1 ");
        Fibonacci(n - 2);
    }    
     
  return 0;  
 }


