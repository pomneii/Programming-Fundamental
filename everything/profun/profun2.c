
#include <stdio.h>
#include <string.h>

int main() {

    int i, num, count;
    char lastmode, curmode;
    char str[100];
    printf("Input string : ");
    scanf("%s", str);
    lastmode = 'n';
 //#1
    if(str[i] >= '0' && str[i] <= '9') {
        num = 0;
    } else {
        num = 1;
    }
//#2
    for (i = 0 ; i < strlen(str) ; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            curmode = 'c'; 
            }
        else if (str[i] >= '0' && str[i] <= '9') {
            curmode = 'n';
            }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            curmode = 'c';
        }
//#3
        if (lastmode == 'n' && curmode == 'n') {
                num = num * 10 + (str[i]-'0');
        }
        else if (lastmode == 'n' && curmode == 'c') {
            for (count = 0 ; count < num ; count++) {
                printf("%c", str[i]);
                }
            num = 1;
            }
        else if (lastmode == 'c' && curmode == 'n') {
            num = str[i] - '0';
            }
        else if (lastmode == 'c' && curmode == 'c') {
            printf("%c", str[i]);
            num = 1;
            }
        lastmode = curmode;
//#4
    }
    return 0;
}
