
/*
    เขียนโปรแกรม รับ input เป็น string 2 ชุด (text,keyword) แล้วให้แสดงผลตำแหน่งของ keyword ใน text โดยใช้ Boyer-Moore Algorithm 
    ในกรณีที่พบ keyword ใน text ให้แสดงผลตำแหน่งของ keyword ใน text
    ในกรณีที่ไม่พบ ให้แสดงผล "keyword not found."
    ในกรณีที่พบ keyword ใน text มากกว่า 1 ตัวให้แสดงผลตำแหน่งทุกตัว

    ตัวอย่าง
    input 1 : This is a long string containing the word 'example'.
    input 2 : example
    output : 
    32

    input 1 : This is a long string without the keyword.
    input 2 : missing
    output : 
    keyword not found.

    input 1 : This is an example of a sentence with multiple example occurrences.
    input 2 : example
    output : 
    10
    39
*/

#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

void check(char *str, int size, int bd[256]) {
    int i;

    for (i = 0 ; i < 256 ; i++) {
        bd[i] = -1;
    }

    for (i = 0 ; i < size ; i++) {
        bd[(int)str[i]] = i;
    }
}

void findWord(char *str, char *word) {
    int m = strlen(word);
    int n = strlen(str);

    int bd[256];

    int checks = 0;

    check(word, m, bd);

    int s = 0;

    while (s <= (n - m)) {
        int j = m - 1;

        while (j >= 0 && word[j] == str[s + j]) {
            j--;
        }

        if (j < 0) {
            printf("%d\n", s);
            checks++;

            s += (s + m < n) ? m - bd[str[s + m]] : 1;
        } else {
            s += max(1, j - bd[str[s + j]]);
        }

    }
    if(check == 0) {
        printf("Keyword not found");
    }

}

int main() {
    char str[100];
    char word[50];
    printf("Enter string : ");
    gets(str);
    printf("Enter word : ");
    gets(word);  
    findWord(str, word);

    return 0;
}