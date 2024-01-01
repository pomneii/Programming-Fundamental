
#include <stdio.h>

int main() {

    int n, reversedInteger = 0, remainder, originalInteger;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalInteger = n;
    printf("originalInteger = %d\n", originalInteger);
    // reversed integer is stored in variable (#1)
    while( n!=0 ) {
        remainder = n % 10;
        reversedInteger = reversedInteger * 10 + remainder;
        n /= 10; //(#2)
        printf("reversedInteger = %d\n", reversedInteger);
    }
    // palindrome if orignalInteger and reversedInteger are equal (#3)
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
        
    return 0;
}