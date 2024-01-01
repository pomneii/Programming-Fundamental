
/*
  เขียนโปรแกรมรับ input เป็นชุดตัวเลขเรียงลำดับจากน้อยไปมา 2 ชุด แล้วแสดงผลเป็นชุดตัวเลขที่เรียงลำดับจากน้อยไปมาก ของตัวเลขภายใน input ทั้งสองชุด

    input : 
    3 8 14 23 56
    1 2 9 18 22 89
    output : 
    1 2 3 8 9 14 18 22 23 56 89 
*/

#include <stdio.h>
#include <string.h>
//#include <ctype.h>

int main() {
    char num1[50];
    char num2[50];
    int mix[100];
    int num = 0 ;
    int sum = 0;
    int temp;

    printf("Enter first list : ");
    fgets(num1, 50, stdin);
    printf("Enter second list : ");
    fgets(num2, 50, stdin);


    for(int i = 0 ; i < strlen(num1) ; i++) {
        if(isdigit(num1[i])) {
            sum = 0;
            while(isdigit(num1[i])) {
                sum = sum * 10 + (num1[i] - '0');
            i++;
            }
            mix[num] = sum;
            num++;
        }
    }

    for(int i = 0 ; i < strlen(num2) ; i++) {
        if(isdigit(num2[i])) {
            sum = 0;
            while(isdigit(num2[i])) {
                sum = sum * 10 + (num2[i] - '0');
            i++;
            }
            mix[num] = sum;
            num++;
        }
    }

    for(int i = 0 ;  i < num ; i++) {
        for(int j = 0 ; j < num - 1 ; j++) {
            if(mix[j] > mix[j + 1]) {
                temp = mix[j];
                mix[j] = mix[j + 1];
                mix[j + 1] = temp;
            }
        }
    }

    for(int i = 0 ; i < num ; i++) {
        printf("%d ", mix[i]);
    }

    return 0;
}