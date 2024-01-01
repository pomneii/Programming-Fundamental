/*

    จงเขียนโปรแกรมรับความยาวของด้านทั้ง 3 ของสามเหลี่ยมแล้วแสดงผลพื้นที่ของสามเหลี่ยมรูปนี้ (การป้อนอินพุทจะป้อนด้านของรูปสามเหลี่ยมเท่านั้น) (Level 1)

*/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, s;
    float area;
    printf("Enter 3 sides of triangle : ");
    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt((s * (s-a) * (s-b) * (s - c)));
    printf("%f", area);

    return 0;
}