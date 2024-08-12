#include <stdio.h>

int main() {
    float num1, num2, num3, average;
    printf("세 개의 실수를 입력하세요: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    average = (num1 + num2 + num3) / 3.0;
    printf("입력된 세 실수의 평균: %.2f\n", average);
    return 0;
}
