
/*
    ให้สร้างฟังก์ชัน float area(x1,y1,x2,y2,x3,y3) สำหรับคำนวณพื้นที่สามเหลี่ยมที่มีจุดปลายคือ (x1,y1), (x2,y2), (x3,y3) โดย x1,x2,x3,y1,y2,y3 เป็น int ทั้งหมด
    แล้วเเขียน main() เพื่อรับ input ทั้ง 6 ตัว

    ตัวอย่าง เช่น
    input : 0 0 2 2 2 0
    output : 2.00
*/

#include <stdio.h>

int x1, b1, x2, y2, x3, y3;

float area() {
    float area;
    area = ((x1 * y2) + (x2 * y3) + (x3 * b1) - (x2 * b1) -(x3 * y2) - (x1 * y3)) / 2;
    
    if(area < 0) {
        area = area * (-1);
    }
    return area;
}

int main() {
    
    scanf("%d %d %d %d %d %d", &x1, &b1, &x2, &y2, &x3, &y3);
    printf("%.2f", area(x1, b1, x2, y2, x3, y3));

}