
/*

    จงเขียนโปรแกรมรับชื่อ นามสกุล และรหัสนักศึกษาของนักศึกษา 3 คน แล้วนำมาจัดอยู่ในตารางโดยให้ชื่อและนามสกุลของนักศึกษาอยู่ชิดด้านซ้ายของตาราง 
    ส่วนรหัสอยู่ชิดขวาของตารางดังรูป (Level 1)
    +-------------+-------------+------------+
    |Thanunchai   |Threepak     |   400400444|
    |Thanunchai   |Threepak     |	400400445|
    |Thanunchai   |Threepak     |	400400446|
    +-------------+-------------+------------+


*/

#include <stdio.h>

int main() {
    struct student {
        char name[15];
        char surname[15];
        int stu_id;
    };

    struct student s[3];

    for(int i = 0 ; i < 3 ; i++) {
        scanf("%s", s[i].name);
        scanf("%s", s[i].surname);
        scanf("%d", &s[i].stu_id);
    }

    printf("+---------------+---------------+----------------+\n");

    for(int i = 0 ; i < 3 ; i++) {
        printf("|%s \t", s[i].name);
        printf("|%s \t", s[i].surname);
        printf("| \t");
        printf("%d| \n", s[i].stu_id);
    }

    printf("+---------------+---------------+----------------+");

    return 0;
    
}