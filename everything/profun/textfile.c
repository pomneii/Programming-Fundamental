
/*
    เขียนโปรแกรมเก็บข้อมูล 
    ชื่อผู้เล่น , level และคะแนนของผู้เล่น จำนวน 5 คน เก็บไว้ใน Text File
*/

#include <stdio.h>
#include <string.h>

int main() {

    int i;
    struct player {

        char name[20];
        int level;
        int score;
    };

    struct player s[5];
    
    for(i = 0 ; i < 5 ; i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].level);
        scanf("%d", &s[i].score);
    }

    FILE *fp;
    fp = fopen("mytestfile.txt", "w");

    for(i = 0 ; i < 5 ; i++) {
        fprintf(fp,"Name : %s \t", s[i].name);
        fprintf(fp,"Level : %d \t", s[i].level);
        fprintf(fp,"Score : %d \n", s[i].score);
    }

    fclose(fp);
    return 0;
}