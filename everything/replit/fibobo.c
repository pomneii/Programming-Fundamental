
/*
  จากลำดับตัวเลข Fibonacci ตัวอย่าง :

    Fibonacci Sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181

    จงเขียนโปรแกรมรับตัวเลข 1 ตัว แล้วแสดงตัวเลข Fibonacci ในลำดับดังกล่าวเช่น

    input : 4
    output : 2

    input : 10
    output : 34

*/

#include <stdio.h>

int Fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int num1 = 0, num2 = 1, result = 0;
        for (int i = 3; i <= n; i++) {
            result = num1 + num2;
            num1 = num2;
            num2 = result;
        }
        return result;
    }
}

int main() {
    int num;
    printf("Enter a position: ");
    scanf("%d", &num);

    int result = Fibonacci(num);

    printf("%d", result);

    return 0;
}