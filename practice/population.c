
/*

    ในจังหวัด A มีประชากร x1 คน มีอัตราการเพิ่มประชากร y1 เปอร์เซ็นต์ต่อปี ในจังหวัด B มีประชากร x2 คน มีอัตราการเพิ่มประชากร y2 เปอร์เซ็นต์ต่อปี 
    จงเขียนโปรแกรมหาว่าสิ้นปีที่เท่าไร ที่ประชากรของจังหวัด A จะมากกว่า B ให้แสดงประชากรของทั้ง 2 จังหวัด 
    จนถึงปีที่เป็นไปตามเงื่อนไข (ป้อนข้อมูลโดย x1 < x2, y1 > y2) ดังตัวอย่างการทำงานของโปรแกรม (Level 1)

*/

#include <stdio.h>

int main() {
    float rate1 = 0.50;
    float rate2 = 0.05;
    float popA = 10000;
    float popB = 20000;
    int count = 0;
   
    while(popA < popB) {
        popA = popA + (popA * rate1);
        popB = popB + (popB * rate2);
        count++;
        printf("%.2f\n", popA);
        printf("%.2f\n", popB);
    } 
    if(popA > popB) {
        printf("Duaration = %d years", count);
    }
    
    return 0;
}