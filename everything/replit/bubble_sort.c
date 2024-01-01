
/*

    จงเขียนโปรแกรมรับ input เป็นตัวเลข 10 ตัว แล้วทำการสร้างฟังก์ชั่น bubble_sort() ในการเรียงลำดับตัวเลขจากน้อย ไปมาก โดยใช้ bubble sort algorithm

*/

#include <stdio.h>

void bubble_sort(int num[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}

int main() {
    int num[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d, ", &num[i]);
    }

    bubble_sort(num, 10);

    for (int i = 0; i < 10; i++) {
      if(i == 9) {
        printf("%d", num[9]);
        break;
      }
      printf("%d, ", num[i]);
    }

    return 0;
}