
/*
    เขียนโปรแกรมสร้าง struct student เก็บข้อมูลนักศึกษา 3 คน โดยเก็บข้อมูล , ชื่อ , อายุ แล้วแสดงผลข้อมูลทั้งหมด
*/

#include <stdio.h>
#include <string.h>

int main() {
    int i, j;
    struct student {
         int student_id;
         char name[50];
         int age;
    };

    struct student s[3];
    
    for(i = 0 ; i < 3 ; i++) {
        scanf("%d", &s[i].student_id);
        scanf("%s", s[i].name);
        scanf("%d", &s[i].age);
    }

    for(i = 0 ; i < 3 ; i++) {
        printf("Student ID : %d \t", s[i].student_id);
        printf("Name : %s \t", s[i].name);
        printf("Age : %d \n", s[i].age);
    }

    return 0;   
}