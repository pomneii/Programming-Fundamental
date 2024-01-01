
/*
    ให้นักศึกษาเขียนโปรแกรมรับ Input เป็นหมายเลขบัตรประจำตัวประชาชน 13 หลัก แล้วโปรแกรมแสดงผลการตรวจสอบว่าเป็นหมายเลขบัตรประชาชน 13 หลักที่มีรูปแบบถูกต้องหรือไม่

    ตัวอย่าง
    input : 1234567890121
    output : PersonalID

    input : 9876543210981
    output : Not PersonalID
*/

#include <stdio.h>
#include <string.h>

int main() {
    char perID[20];
    printf("Enter your PersonalID: ");
    scanf("%s", perID);
    int per = 0;

    int len = strlen(perID);

    if(len != 13) {
        per = 1;
    } else {
        for(int i = 0 ; i < 13 ; i++) {
            if(!(isdigit(perID[i]))) {
                per = 1;
            }
        }

        if(per == 0) {
            int sum = 0;
            for(int i = 0 ; i < 12 ; i++) {
                sum = sum + (perID[i] - '0') * (13 - i);
            }

            int checkPer = (11 - (sum % 11));
            //printf("%d\n", checkPer);
            //printf("%d\n", perID[12] - '0');
            if(perID[12] - '0' == checkPer) {
                per = 0;
            } else {
                per = 1;
            }
        }
    }

    if (per == 0) {
        printf("PersonalID");
    } else {
        printf("Not PersonalID");
    }

    return 0;
}

// 4536271898767