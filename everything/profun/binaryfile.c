
/*
    เขียนโปรแกรมเก็บข้อมูล ชื่อผู้เล่น , level , และคะแนนของผู้เล่น จำนวน 5 คน เก็บไว้ใน Binary File
*/

#include <stdio.h>

int main() {

    FILE *fptr;
    struct player {

        char name[20];
        int level;
        int score;
    };

    struct player s[5];
    
    for(int i = 0 ; i < 5 ; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].level);
        scanf("%d", &s[i].score);
    }

    fptr = fopen("StRecord.txt", "w");
    for(int i = 0 ; i < 5 ; i++) {
        printf("Name : %s \t", s[i].name);
        printf("Level : %d \t", s[i].level);
        printf("Score : %d \n", s[i].score);
    }

    fwrite(&s, sizeof(struct player), 5, fptr);
    fclose(fptr);
    return 0;
}