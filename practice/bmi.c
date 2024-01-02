
/*

    จงเขียนโปรแกรมเพื่อหาค่า Body Mass Index จากค่าความสูงและน้ำหนัก ซึ่งมีสูตรการคำนวณดังนี้
    BMI = Weight / Height2
    เมื่อ Weight มีหน่วยเป็นกิโลกรัม และ Height มีหน่วยเป็นเมตร (เกณฑ์การแบ่งน้ำหนักโดยใช้ BMI , ต่ำกว่า 18.5 น้ำหนักต่ำกว่าเกณฑ์ , 18.5 - 24.9 ปกติ , 
    25.0 - 29.9 สูงกว่ามาตรฐาน , ตั้งแต่ 30.0 ขึ้นไป อ้วนเกินไป ) (Level 1)

*/

#include <stdio.h>
#include <math.h>

int main() {
    float weight, height, BMI;
    printf("Enter your weight(kg) : ");
    scanf("%f", &weight);
    printf("Enter your height(m) : ");
    scanf("%f", &height); 
    BMI = weight / (height * height);
    if(BMI < 18.5) {
        printf("Too less");
    } else if(BMI >= 18.5 && BMI <= 24.9) {
        printf("Normal");
    } else if(BMI >= 25.0 && BMI <= 29.9) {
        printf("Too high");
    } else if(BMI >= 30.0) {
        printf("Obese");
    }

    return 0;
}