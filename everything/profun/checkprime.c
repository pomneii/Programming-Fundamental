
/*
    เขียนโปรแกรมเพื่อตรวจสอบว่าตัวเลขที่ป้อนเป็นตัวเลขจำนวนเฉพาะหรือไม่
    ถ้าเป็นจำนวนเฉพาะ แสดงผล "Prime Number"
    ถ้าไม่ใช่จำนวนเฉพาะ แสดงผล "Not Prime Number"
    โดยสร้างและใช้งานฟังก์ชัน isPrime()
*/

#include <stdio.h>

int isPrime(int x) { // function implementation
    if(x == 0 || x == 1) {
        return 0;
    }
    for(int i = 2 ; i < x  ; i++) {
        if(x % i == 0) {
            return 0;
        }
    }
    return 1;

}
int main() {
    int a;
    printf("Input number : ");
    scanf("%d", &a);
    if (isPrime(a) == 1) {
        printf("Prime Number");
    } else {
        printf("Not Prime Number");
    }
}